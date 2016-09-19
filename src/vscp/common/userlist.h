// userlist.h
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version
// 2 of the License, or (at your option) any later version.
// 
// This file is part of the VSCP (http://www.vscp.org) 
//
// Copyright (C) 2000-2016 
// Ake Hedman, Grodans Paradis AB, <akhe@grodansparadis.com>
// 
// This file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this file see the file COPYING.  If not, write to
// the Free Software Foundation, 59 Temple Place - Suite 330,
// Boston, MA 02111-1307, USA.
//


#if !defined(USERLIST__INCLUDED_)
#define USERLIST__INCLUDED_

#include <wx/hashset.h>
#include <wx/socket.h>

#include <dllist.h>
#include <vscphelper.h>
#include <vscp.h>

// permission bits for an object (variables)
// uuugggooo
// uuu = user   (rwx)
// ggg = group  (rwx)
// ooo = other  (rwx)
// First user rights is checked. If user have rights to do the operation it is 
// allowed. If not group rights are checked and if the user is member of a group
// that is allowed to do the operation it is allowed. Last other rights are checked
// and if the the other rights allow the user to do the operation it is allowed.

// User rights bit array
// "admin" has all rights.
// "user" standard user rights
// "driver" can send and receive events and log in to tcp/ip through local host

// Rights byte 7
#define VSCP_USER_RIGHT_ALLOW_RESTART                   0x80000000


// Rights byte 6
#define VSCP_USER_RIGHT_ALLOW_VARIABLE_SAVE             0x10000000

// Rights byte 5
#define VSCP_USER_RIGHT_ALLOW_DM_EDIT                   0x08000000
#define VSCP_USER_RIGHT_ALLOW_DM_LOAD                   0x04000000
#define VSCP_USER_RIGHT_ALLOW_DM_SAVE                   0x02000000
// Undefined

#define VSCP_USER_RIGHT_ALLOW_VSCP_DRV_LOAD             0x00800000
#define VSCP_USER_RIGHT_ALLOW_VSCP_DRV_UNLOAD           0x00400000

// Rights byte 4

// Rights byte 3

// Rights byte 2
#define VSCP_USER_RIGHT_ALLOW_SEND_EVENT                0x00010000

// Rights byte 1
#define VSCP_USER_RIGHT_ALLOW_UDP                       0x00000200
#define VSCP_USER_RIGHT_ALLOW_COAP                      0x00000100

// Rights byte 0
#define VSCP_USER_RIGHT_ALLOW_MQTT                      0x00000080
#define VSCP_USER_RIGHT_ALLOW_WEB                       0x00000040
#define VSCP_USER_RIGHT_ALLOW_WEBSOCKET                 0x00000020
#define VSCP_USER_RIGHT_ALLOW_TCPIP                     0x00000010

// Some interfaces has a privilege level for commands 
// Higher privileges is "better"
#define VSCP_USER_RIGHT_PRIORITY3                       0x00000008
#define VSCP_USER_RIGHT_PRIORITY2                       0x00000004
#define VSCP_USER_RIGHT_PRIORITY1                       0x00000002
#define VSCP_USER_RIGHT_PRIORITY0                       0x00000001

// Users not in db is local
#define USER_IS_LOCAL           -1  // Never saved to db
#define USER_IS_UNSAVED          0  // Should be saved to db

#define USER_PRIVILEGE_MASK     0x0f
#define USER_PRIVILEGE_BYTES    8

class CGroupItem {
    
public:

    /// Constructor
    CGroupItem(void);

    /// Destructor
    virtual ~CGroupItem(void);
    
    
private:
    
};


// hash table for groups
WX_DECLARE_HASH_MAP(wxString, CGroupItem*, wxStringHash, wxStringEqual, VSCPGROUPHASH);


class CUserItem {
    
public:

    /// Constructor
    CUserItem(void);

    /// Destructor
    virtual ~CUserItem(void);

    /*!
        Check if a remote client is allowed to connect.
        First full ip address is checked against hash set (a.b.c.d)
        Next LSB byte is replaced with a star and tested. (a.b.c.*)
        Next the lsb-1 is also replaced with a star and tested. (a.b.*.*)
        Last the lsb-2 is replaced with a star and tested.(a.*.*.*)
        @param remote ip-address for remote machine.
        @return true if the remote machine is allowed to connect.
    */
    bool isAllowedToConnect( const wxString& remote);

    /*!
        Check if use is allowed to send event.
        First check "*.*"
        Next check "class:type"
        Next check "class:*"
        @param vscp_class VSCP class to test.
        @param vscp_type VSCP type to test.
        @return true if the client is allowed to send event.
        */
    bool isUserAllowedToSendEvent( const uint32_t vscp_class,
                                    const uint32_t vscp_type);
    
    
    /*!
     * Set user rights from a comma separated string. The string can have 
     * up to eight comma separated bitfield octets.  
     * 
     * As an alternative one can use mnenomics
     * 
     * admin    - user get full access.
     * user     - user get standard user rights.
     * driver   - user get standard driver rights.
     */
    bool setUserRightsFromString( const wxString& strRights );
    
    /*!
     * Set allowed remote addresses for string
     * Comma separated list if IP v4 or IP v6 addresses. Wildcards can be used
     * on any position ('*').
     */
    bool setAllowedRemotesFromString( const wxString& strConnect );
    
    /*!
     * Set allowed event for string.
     * Comma separated string where each item is class:type where either
     * class or type or both can be wildcard '*'
     */
    bool setAllowedEventsFromString( const wxString& strEvents );
    
    /*!
     * Save record to database
     * @return true on success.
     */
    bool saveToDatabase( void );
    
    /*!
     * Check if a user is defined available in the db
     * @param user username to look for.
     * @param pid  Optional Pointer to integer that receives id for the record if
     *              the user is found.
     * @return true on success
     */
    bool isUserInDB(const wxString& user, long *pid = NULL );
    
    bool checkPassword( const wxString& md5password ) { return (getPassword().IsSameAs( md5password ) ? true : false); };
    
    // Getters/Setters
    int getUserID( void ) { return m_userID; };
    void setUserID( const int id ) { m_userID = id; };
    
    wxString getUser( void ) { return m_user; };
    void setUser( const wxString& strUser ) { m_user = strUser; };
    
    wxString getPassword( void ) { return m_md5Password.Lower(); };
    void setPassword( const wxString& strPassword ) { m_md5Password = strPassword.Lower(); };
    
    wxString getFullname( void ) { return m_fullName; };
    void setFullname( const wxString& strUser ) { m_fullName = strUser; };
    
    wxString getNote( void ) { return m_note; };
    void setNote( const wxString& note ) { m_note = note; };
    
    uint8_t getUserRight( const uint8_t pos ) { return m_userRights[ pos & 0x07 ]; };
    void setUserRight( const uint8_t pos, const uint8_t right ) { m_userRights[ pos & 0x07 ] = right; };
    wxString getRightsAsString( void );
    
    void clearAllowedEventList( void ) { m_listAllowedEvents.Clear(); };
    void addAllowedEvent( const wxString& strEvent ) { m_listAllowedEvents.Add( strEvent ); };
    wxString getAllowedEventsAsString( void );
    
    void clearAllowedRemoteList( void ) { m_listAllowedIPV4Remotes.Clear(); m_listAllowedIPV6Remotes.Clear(); };
    void addAllowedRemote( const wxString& strRemote ) { if ( wxNOT_FOUND != strRemote.Find(':') ) m_listAllowedIPV6Remotes.Add( strRemote ); else m_listAllowedIPV4Remotes.Add( strRemote ); };     
    wxString getAllowedRemotesAsString( void );
 
    const vscpEventFilter *getFilter( void ) { return &m_filterVSCP; };
    void setFilter( const vscpEventFilter * pFilter ) { if ( NULL != pFilter ) memcpy( &m_filterVSCP, 
                                                                    pFilter,
                                                                    sizeof( vscpEventFilter ) ); };
    bool setFilterFromString( wxString& strFilter ) { return vscp_readFilterFromString( &m_filterVSCP, strFilter ); };                                                                    
protected:
    
    // System assigned ID for user (-1 for system users (not in DB), 0 for new users )
    long m_userID;
    
    /// Username
    wxString m_user;
    
    /// MD5 of user password
    wxString m_md5Password;
    
    /// Full name
    wxString m_fullName;
    
    /// note
    wxString m_note;
    
    /*!
        Bit array with user rights i.e. tells what
        this user is allowed to do.
    */ 
    uint8_t m_userRights[ USER_PRIVILEGE_BYTES ];
    
    /*!
        This list holds allowed events that user can send.
        Wildcards can be used and the default is all events 
        allowed. Form is class:type where either or both of
        class and type can use wildcard '*'
    */
    wxArrayString m_listAllowedEvents;
    
    /*!
        This list holds ip-addresses for remote
        computers that are allowed to connect to this
        machine. IP v4 and IP v6 on standard form.
    */
    wxArrayString m_listAllowedIPV4Remotes;
    wxArrayString m_listAllowedIPV6Remotes;
    
    /*!
        Filter associated with this user
    */
    vscpEventFilter m_filterVSCP;

};

// hash table for users
WX_DECLARE_HASH_MAP(wxString, CUserItem*, wxStringHash, wxStringEqual, VSCPUSERHASH);


class CUserList {
public:

    /// Constructor
    CUserList(void);

    /// Destructor
    virtual ~CUserList(void);
    
    /*!
     * Load users from database
     * @return true on success
     */
    bool loadUsers( void );

    /*!
        Add a user to the in memory list. Must save to database to make persistent.
        @param user Username for user.
        @param md5 MD5 of user password.
        @param note An arbitrary note about the user
        @param Ponter to a VSCP filter associated with this user.
        @param userRights list with user rights on the form right1,right2,right3....
                    admin - all rights
                    user - standard user rights
                    or an unsigned long value
        @param allowedRemotes List with remote computers that are allowed to connect. 
                    Empty list is no restrictions.			
        @param allowedEvents List with allowed events that a remote user is allowed
                    to send.
        @param bSystemUser If true this user is a user that should not be save to the DB
        @return true on success. false on failure.	
    */
    bool addUser(const wxString& user,
                            const wxString& md5,
                            const wxString& strNote,
                            const vscpEventFilter *pFilter = NULL,
                            const wxString& userRights = _(""),
                            const wxString& allowedRemotes = _(""),
                            const wxString& allowedEvents = _(""),
                            bool bSystemUser = false );


    /*!
        Get user 
        @param user Username
        @return Pointer to user if available else NULL
    */
    CUserItem * getUser( const wxString& user );

    /*!
        Validate a username.
        @param user Username to test.
        @return Pointer to useritem if valid, NULL if not.
        */
    CUserItem * validateUser(const wxString& user, const wxString& md5password);


protected:

    /*!
        hash with user items
    */
    VSCPUSERHASH m_userhashmap;
    
    /*!
        hash with group items
    */
    VSCPGROUPHASH m_grouphashmap;

};



#endif


