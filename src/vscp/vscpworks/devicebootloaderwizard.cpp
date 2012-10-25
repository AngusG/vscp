/////////////////////////////////////////////////////////////////////////////
// Name:        devicebootloaderwizard.cpp
// Purpose:     
// Author:      Ake Hedman
// Modified by: 
// Created:     16/12/2009 22:26:09
// RCS-ID:      
// Copyright:   (C) 2007-2012 Ake Hedman, Grodans Paradis AB, <akhe@grodansparadis.com>
// Licence:     
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version
// 2 of the License, or (at your option) any later version.
// 
// This file is part of the VSCP (http://www.vscp.org) 
// 
// This file is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this file see the file COPYING.  If not, write to
// the Free Software Foundation, 59 Temple Place - Suite 330,
//  Boston, MA 02111-1307, USA.
// 
//  As a special exception, if other files instantiate templates or use macros
//  or inline functions from this file, or you compile this file and link it
//  with other works to produce a work based on this file, this file does not
//  by itself cause the resulting work to be covered by the GNU General Public
//  License. However the source code for this file must still be made available
//  in accordance with section (3) of the GNU General Public License.
// 
//  This exception does not invalidate any other reasons why a work based on
//  this file might be covered by the GNU General Public License.
// 
//  Alternative licenses for VSCP & Friends may be arranged by contacting 
//  Grodans Paradis AB at info@grodansparadis.com, http://www.grodansparadis.com
/////////////////////////////////////////////////////////////////////////////

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma implementation "devicebootloaderwizard.h"
#endif

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "vscpworks.h"
#include "devicebootloaderwizard.h"
#include "dlgnewvscpsession.h"
#include "bootdevice_vscp.h"
#include "bootdevice_pic1.h"

////@begin XPM images
/* XPM */
static const char *vscp_logo_xpm[] = {
/* columns rows colors chars-per-pixel */
"151 212 3778 2",
"d$ c Black",
"8# c #73B9B9",
"~* c #000002",
"zo c #8FF9F7",
"s3 c #111500",
"rO c #8FF9F9",
"<> c #4C4E43",
"56 c #636502",
"3$ c #001817",
"@w c #6A6F13",
"[o c #001818",
"T% c #0A0B00",
"J= c #B9BE30",
"T1 c #221200",
"a. c #1C5858",
"_@ c #81FDFB",
"a1 c #CCCBC6",
"AX c #D3D5D4",
"mi c #6D7000",
"y  c #00302D",
"K- c #030100",
"H, c #D49611",
"'w c #A59063",
"m$ c #92FAF9",
"m2 c #C7A252",
"&o c #3B8181",
"he c #252B00",
"HO c #5A9291",
"ii c #48453E",
"8d c #4F4F4D",
"3@ c #004847",
"3y c #0D0C00",
">7 c #777B02",
"i% c #004848",
"Vd c #4F4F4F",
"Yw c #E3CA91",
"O2 c #1E2100",
"L: c #0D0C07",
"+2 c #777B0A",
"Ro c #87CFCE",
"_, c #BCBF3A",
"R7 c #D6D6D6",
"x3 c #060200",
"N, c #1E0900",
"+y c #36280B",
"y& c #EBF508",
"}; c #EBF509",
"N* c #EBF50B",
"vi c #8F6A19",
"Oq c #100D00",
"Ks c #171717",
";i c #C69A39",
"_- c #323700",
"[O c #E0E1E3",
"#t c #9E9E96",
"&  c #9E9E9C",
"p2 c #C6CA51",
"ri c #2B2D00",
")@ c #6BD7D7",
"@y c #E9CC8A",
"c6 c #EEF60B",
"!; c #EEF60D",
")> c #EEF60F",
"g8 c #DAE036",
"h3 c #130E00",
"K3 c #8E9200",
"H; c #EEF615",
"Ge c #B59D61",
"ou c #EEF617",
"m@ c #EAECEB",
"4s c #EEF619",
"ht c #C99B39",
"oO c #BDC7C8",
"Vr c #84871E",
"R9 c #EEF625",
"{, c #EEF627",
"$= c #E4EB3B",
"s, c #2E2E00",
"e3 c #E4EB3D",
"/- c #DDE134",
"KO c #8DE9E8",
"SO c #666666",
"Lu c #CC9C2E",
"i8 c #3F4300",
"Ke c #EEF631",
"*t c #CC9C30",
"~& c #2E2E0A",
"T> c #24231F",
"et c #F1F717",
"[# c #52B0B0",
"&$ c #EDEDEB",
"q= c #8E9224",
"n5 c #F1F719",
"-$ c #EDEDED",
"7; c #F1F71B",
"Ia c #0F0500",
"'5 c #DDE144",
"C. c #1A4848",
"7+ c #B2B4B3",
"03 c #F1F721",
"e, c #F1F723",
"s8 c #E7EC37",
"B; c #E7EC38",
"[: c #F1F725",
"V7 c #E7EC3A",
"Er c #9F771F",
"=7 c #8E9233",
"Ku c #CF9D2C",
"u9 c #2E2E24",
":, c #CF9D2E",
"(9 c #F1F731",
"O% c #010900",
"F+ c #397170",
"_3 c #E7EC47",
"Fr c #F1F735",
"/4 c #E7EC48",
"A* c #2E2E2C",
"_+ c #F7F8FA",
"Z4 c #F1F73D",
"c2 c #120600",
"<9 c #E7EC52",
"d2 c #F1F73F",
"^8 c #B5B5B5",
",0 c #4C4F00",
"u6 c #919330",
"f3 c #4C4F02",
"E> c #F4F825",
"[y c #F4F827",
"A- c #38392B",
"t4 c #73726D",
"}2 c #F1F74B",
"b9 c #F1F74D",
"_a c #CB941F",
"E8 c #AFB400",
"s# c #9AF5F6",
"w4 c #F1F74F",
"y3 c #F4F82F",
"5% c #A5A914",
"/y c #D29E2E",
"%- c #F4F831",
":p c #D29E30",
"Gr c #F4F832",
"We c #FAF9F5",
"k4 c #4C4F16",
"K& c #4D6F6E",
"dq c #150700",
"cp c #7C5D1C",
"2t c #EEC671",
"W$ c #F4F83F",
"36 c #F4F841",
"!+ c #8CF9F6",
"ee c #F5D082",
"vw c #F4F843",
"mu c #B38D3A",
"M- c #F4F849",
"Q5 c #AFB41C",
"+p c #F4F84B",
"^> c #F4F84C",
"j& c #7D7D7D",
"], c #070B00",
" + c #96ECEB",
"`: c #595B00",
"o4 c #B9BF15",
"#X c #151F20",
"{7 c #E0E281",
"w  c #000100",
"'e c #F1C771",
"z8 c #000103",
"}e c #AFB434",
"up c #AF8428",
"#i c #221300",
"r; c #0A0C00",
"(. c #508889",
"zr c #454545",
"b2 c #90732D",
"sr c #0A0C0B",
"G* c #030200",
"06 c #B2B532",
"@, c #141700",
">y c #606545",
"d% c #7DDDDC",
"jy c #0D0D00",
"7r c #634E21",
"R1 c #6A5832",
"Kt c #1E2200",
"!p c #C6CB27",
"X, c #D0D614",
"s: c #0D0D0B",
"o+ c #0D0D0D",
"!X c #A2A8A8",
"Ee c #595B4E",
"[= c #171800",
"&@ c #949492",
"v0 c #70720D",
",s c #70720F",
"~e c #949496",
"=; c #5C5C36",
"*; c #171808",
"!2 c #100E00",
"Q9 c #171810",
"ms c #171812",
"lu c #A8AA7B",
"}9 c #EDD6A2",
"s% c #487676",
"Ha c #D9D8D3",
"|a c #7A7D12",
":r c #21230E",
"W1 c #40341C",
"G9 c #85784E",
",: c #2B2E00",
"ew c #E2C382",
")r c #E2C383",
"Y9 c #EEF712",
"Si c #242400",
"4+ c #75CBCA",
"Dt c #AE9457",
"++ c #E3E3E3",
"W2 c #D3D73A",
"[@ c #A8AAA7",
"0+ c #59A3A2",
"I< c #E4EC37",
"O4 c #DDE22E",
"7e c #88794E",
"B7 c #2E2F00",
"Br c #D3D744",
".e c #E5C481",
"ka c #161000",
"r9 c #F1F814",
"42 c #1D1A15",
")O c #F4F8F9",
"nO c #71C2C3",
"hp c #F1F81E",
"oy c #F1F81F",
"G- c #E7ED35",
"L. c #86F8F8",
"27 c #DDE24A",
"YO c #86F8F9",
"Ai c #878924",
"@& c #ABABAB",
" o c #516160",
"~: c #696863",
"n3 c #F1F82C",
"6& c #97F5F4",
"#  c #707271",
"[. c #97F5F5",
"F< c #F1F82E",
"$q c #E8C581",
"k9 c #424500",
"Y6 c #F1F830",
"A4 c #E7ED45",
".@ c #89E1E2",
"A  c #F7F9F8",
"$7 c #F1F839",
"l> c #3B3B00",
"<3 c #534200",
"Ww c #F4F923",
"|2 c #4C5000",
"}X c #89F9FA",
"a0 c #F4F929",
"<w c #F2D089",
"|r c #F4F92B",
"b4 c #EAEE3F",
"0X c #9AF6F5",
"{$ c #646F13",
"<. c #93ECEA",
"@6 c #454600",
".$ c #437D7E",
"/p c #4C5013",
"W  c #8CE2E3",
"C8 c #565B00",
"Gu c #CB9528",
"%t c #452E00",
">o c #FAFAF8",
"]5 c #9B9F31",
"1r c #FAFAFA",
"M* c #F4F93A",
"|. c #7BFDFB",
"&- c #F4F93B",
"|6 c #E0E362",
"<# c #275553",
"I= c #F4F93D",
"G6 c #BFC1C0",
"#s c #7C5E20",
"q* c #4F5100",
"iq c #F4F944",
"23 c #B38E35",
"To c #8CFAF9",
"N- c #9B9F3E",
"60 c #F5D185",
"IX c #8CFAFB",
"N& c #F4F947",
"Rr c #AC842C",
"Z0 c #F5D187",
"a- c #EAEE5B",
"^w c #9B9F41",
"Dq c #E0E372",
"]u c #F7FA31",
"M, c #343128",
"@% c #1C2A2A",
"+8 c #3B3B39",
"m0 c #A8AB1C",
"E% c #62BEBD",
"@# c #88D9DA",
"/w c #F7FA3B",
"U3 c #949547",
":  c #FDFBFC",
"1$ c #000200",
"<: c #000201",
"h# c #000202",
"h* c #000204",
"0O c #C2C2C2",
"`e c #F1C876",
"]a c #595C0F",
"d0 c #B2B619",
",# c #8FFBFB",
"-i c #D1971A",
"vr c #807F7B",
"Z; c #B2B621",
"F3 c #0A0D00",
"{# c #001A1A",
"{r c #594415",
"o. c #001A1B",
"8a c #523A0A",
"(7 c #8A8A72",
"RO c #0E4645",
"N7 c #6D7200",
"%* c #0E4647",
":$ c #030300",
"7- c #030301",
"|o c #003231",
"0, c #030303",
"n# c #003232",
" > c #C6CC10",
"U* c #BCC127",
"c+ c #8A8A88",
";u c #3A3323",
"=+ c #2D6F6E",
"~$ c #0D0E00",
"x8 c #777D03",
"q  c #484745",
"4X c #222C2B",
"Kp c #4E3100",
"=r c #1E2300",
"^X c #95E5E4",
"pt c #C6CC24",
"!5 c #707300",
"P# c #87D1D0",
"F  c #141819",
"%# c #D6D8D7",
"G4 c #C6CC2C",
"=# c #2D8787",
"u7 c #171900",
"=9 c #70730A",
"R= c #171903",
"kr c #171904",
"q- c #C6CC38",
"7@ c #87E9E8",
"Q% c #8ABABA",
"[r c #EDD79D",
"^u c #7A7E03",
"]7 c #C9CD1E",
"S< c #212400",
"n. c #98E6E6",
"4O c #E7EDED",
"C2 c #171918",
"2u c #210C00",
"Zq c #B29E6B",
"FO c #D9D9D9",
"L7 c #666837",
"o8 c #BFC23F",
"f+ c #80F7F5",
"^i c #848900",
"+= c #1A1A00",
".# c #308889",
"Sa c #555347",
"L; c #2B2F00",
"Fe c #F0D89C",
"w1 c #DAE237",
"-4 c #242500",
"#& c #E3E4DF",
";3 c #D3D836",
".p c #C99D3C",
"y# c #174948",
".4 c #878A00",
"ke c #DDE329",
"'9 c #352200",
"@* c #D3D83D",
"]6 c #DDE32B",
"*: c #A1A1A1",
"V1 c #2E3000",
"O. c #475757",
"iy c #F3D99C",
"7X c #666867",
"n1 c #D3D84A",
"ds c #24251F",
"~s c #242520",
"N: c #272600",
";0 c #F1F91A",
".1 c #E6E5E1",
"~; c #E7EE2E",
"k: c #E7EE2F",
"R* c #383B00",
"V2 c #E6E5E3",
"O> c #878A1F",
"$: c #ABACA6",
"^  c #86F9F6",
"u: c #878A21",
"c3 c #69695F",
"F4 c #F1F928",
"`1 c #E7EE3C",
"Ky c #EAEF1F",
"u3 c #E7EE40",
"qr c #F6DA9B",
"+; c #424600",
"dO c #90ECEB",
"`2 c #191200",
" . c #669897",
" p c #CF9F31",
"Uy c #F1F934",
"x2 c #2A2700",
"Qy c #CF9F39",
"Z# c #F0F0EE",
"V: c #EAEF30",
"S  c #F0F0F0",
"[5 c #7D7F50",
"97 c #3B3C03",
"`> c #4C5100",
"P2 c #F1F943",
"*a c #F1F944",
"~  c #89FAF8",
"*2 c #F4FA24",
"vs c #949611",
".2 c #EAEF3A",
"Q; c #F4FA28",
"q; c #EAEF3D",
"r5 c #919536",
"*O c #4D5957",
"7> c #341A00",
"{p c #D2A031",
"2X c #93EDED",
"1; c #F4FA34",
"Dw c #E0E45B",
"!< c #F4FA36",
"1u c #452F00",
"C+ c #122020",
"U= c #EAEF4B",
"}% c #F4FA38",
"oo c #31312F",
"p9 c #150900",
"T2 c #F4FA3E",
"T& c #EAEF54",
"qi c #F4FA42",
"hu c #9EA11E",
",o c #B8B8B8",
"D  c #7D7F7E",
"B< c #CE9720",
"o5 c #F4FA50",
"7p c #595D00",
"@i c #483000",
"n$ c #88DAD8",
"}u c #FDFCFA",
"o= c #C2C3BB",
"Lt c #595D08",
"/* c #000300",
" a c #7F601D",
"G  c #000302",
"e  c #000304",
"L- c #525300",
"6i c #B2B71C",
"ze c #B2B71D",
"9> c #110000",
"A9 c #79766F",
"2q c #B2B71F",
"W= c #80807E",
"V% c #001B17",
"o9 c #A8AC33",
"f5 c #A8AC34",
"52 c #808080",
"|: c #0A0E00",
"Qp c #B2B727",
"P@ c #99EFF0",
"s6 c #EDF06B",
"k# c #8BDBDA",
"oa c #BEBAAF",
"&& c #030400",
"b$ c #00332F",
",t c #C5C4C0",
" # c #003333",
"ai c #B28728",
"`4 c #141900",
"$s c #B9913A",
"a, c #666900",
"^r c #977F4F",
"`  c #919596",
"=u c #48483C",
"b& c #0D0F00",
"@r c #C6CD1F",
"kO c #484848",
"D4 c #707400",
"Y, c #060500",
"_p c #CFCFCD",
"qp c #CFCFCF",
"H4 c #171A00",
"O3 c #66691C",
"8u c #66511C",
"C> c #CAA65A",
"P> c #281700",
"}i c #886312",
"jq c #D8BA7C",
"g* c #212500",
"Tr c #8F6D23",
"H9 c #090600",
"Q= c #10100E",
"2< c #B5B851",
" 1 c #101010",
"Jr c #707428",
"h6 c #1A1B00",
"T8 c #C9CE33",
"5t c #6C6B00",
"/O c #979797",
"ly c #D0D847",
"I> c #3C2D06",
"I& c #94DEDD",
"W6 c #DDE425",
":- c #878B00",
"0< c #C9CE50",
"R; c #A1A29C",
".X c #59A5A3",
"~. c #83F9F9",
"A7 c #878B03",
"Oa c #65490A",
"H* c #2E3100",
"'O c #94F6F5",
"q. c #94F6F7",
"Oi c #956F1C",
"C7 c #5F5F5D",
"qO c #5F5F5F",
"'y c #CCCF42",
"^, c #272700",
"P* c #EAF010",
"Pp c #0F0800",
"z. c #E6E6E6",
"K8 c #CCCF4C",
"d@ c #6ABABB",
"^@ c #86FAF9",
"_9 c #27270F",
"m6 c #E7EF3A",
"~= c #EAF01A",
"y< c #EAF01C",
"d> c #EAF01E",
"NX c #97F7F6",
"vy c #98701B",
"_  c #407E7D",
"-* c #162A29",
"l2 c #EAF02C",
"qo c #F7FBFA",
"75 c #EAF02E",
"/s c #272727",
"G; c #F4FB22",
"%p c #EAF036",
"h  c #BCC2C2",
"Fa c #A7A49D",
"-7 c #EAF038",
"A+ c #89FBFB",
"tt c #8A8C27",
"c, c #9EA203",
"^9 c #80813D",
"k- c #454800",
"[4 c #EAF044",
"W* c #F4FB31",
"D= c #EAF046",
"F1 c #F4FB33",
"S+ c #40AEAD",
"ro c #8CE4E5",
"vp c #D2A138",
"M4 c #F3F2ED",
"(8 c #F4FB3B",
"Ao c #FAFCFB",
"M: c #E0E565",
"cy c #B8B9B3",
"5a c #7C601F",
"sa c #D9DB5C",
"3= c #4F5300",
"}$ c #D9DB5E",
"0> c #0E0000",
"gy c #F7FC2C",
"3w c #6F6C65",
"Li c #767676",
" O c #96EFED",
"{O c #FDFDFB",
"fq c #C1A468",
"Xo c #FDFDFD",
"^$ c #000400",
"!e c #FDFDFF",
"5  c #000402",
"1  c #000404",
"N0 c #BBBAB5",
"i. c #000405",
"~0 c #292000",
"!w c #B2B81A",
"A0 c #F1CA7D",
"2i c #B69140",
"Nu c #D19920",
"w- c #0A0F00",
"|X c #001C1C",
"5# c #73D5D4",
"`X c #1F2D2D",
"]t c #37342F",
"hO c #3E3E3C",
"#@ c #92E6E6",
"1q c #1B0C00",
">$ c #030500",
"mO c #D3D9D9",
"&> c #555500",
"L@ c #003434",
"4e c #C5C5C5",
"z$ c #A1A33E",
"$4 c #C5C5C7",
"~4 c #666A00",
"_# c #48493B",
"$< c #D49A1D",
"Bu c #D49A1F",
"44 c #0D1000",
" 5 c #BFC412",
"F* c #484943",
":# c #004C4B",
"u5 c #666A0C",
"{q c #5F6000",
"1@ c #95E7E5",
"Y- c #B5B92E",
"0* c #060600",
"~t c #8C6D2A",
";@ c #7DF8F6",
"_= c #060604",
"/3 c #BFC422",
"J4 c #171B00",
"T4 c #060606",
"y9 c #BFC429",
"Tq c #A18B5C",
"C* c #BFC42A",
";7 c #7A8000",
",- c #101100",
"]w c #EDD99E",
"|8 c #101101",
"qq c #707517",
"f8 c #212600",
"ne c #7B7054",
"A# c #D9DBDA",
"=& c #1A1C00",
"v4 c #BFC444",
"35 c #1A1C07",
"4a c #624910",
"&u c #BFC44C",
"8r c #C9CF3B",
"s+ c #636969",
"ie c #F0DAA1",
"]= c #1A1C11",
"V4 c #7D8106",
"/, c #555553",
"T- c #73761B",
"1i c #997930",
":8 c #1A1C1B",
"G@ c #DCDCDA",
"2e c #C2C542",
"k* c #638181",
"-o c #83FAF8",
"b8 c #CCD031",
"TX c #829291",
"X1 c #938F86",
"Ii c #5E4000",
"9y c #4A422D",
"{6 c #2E3200",
":@ c #529C9D",
"84 c #D6DB26",
"D: c #E0E614",
">4 c #CCD03D",
"D6 c #76771A",
"#p c #272800",
"~2 c #3F2F00",
",  c #5F6062",
"bt c #16130A",
"8: c #D6DB36",
"yu c #0F0900",
"[t c #1D1D1B",
"w# c #1A4C4B",
"j$ c #1D1D1D",
"Jp c #CCA041",
"U9 c #E0E62A",
"u; c #EAF117",
"E9 c #D6DB40",
" 2 c #313300",
"7O c #A4A4A4",
"M7 c #EAF125",
"'r c #D6DB4D",
"#- c #EAF129",
"at c #E0E63E",
"8% c #EDF20F",
"'& c #3B3E00",
"i; c #F4FC1D",
"i0 c #120A00",
"[u c #EDF212",
"B3 c #F4FC1F",
"td c #E9E8E6",
"L+ c #C3CDCC",
"]q c #3B3E05",
"|p c #CFA141",
"m- c #EDF219",
"P% c #EDF21A",
"*, c #0B0000",
"Q6 c #F4FC2D",
"Y; c #EAF141",
",< c #EDF222",
"^; c #454900",
"|- c #EDF224",
"Yi c #B09043",
"x1 c #E3E738",
"ay c #9EA30B",
"*$ c #6C6C6A",
" , c #EDF226",
"DX c #93EFEE",
"!t c #6C6C6C",
"0q c #CFD163",
"Cy c #8A8D36",
";t c #D2A236",
"A8 c #EAF14B",
"Y# c #3C7677",
"h$ c #313332",
"_& c #F3F3F1",
"L6 c #EDF233",
"Zo c #F3F3F3",
"^q c #EDF234",
"{3 c #4F5400",
"Wp c #E3E74A",
"Q+ c #8CFDFB",
"N6 c #A8AE0C",
"v7 c #EDF23D",
"@e c #0E0100",
"h8 c #EDF23E",
"P1 c #D2D258",
"z- c #EDF240",
"Z2 c #9EA32B",
"u# c #96F0F0",
"5$ c #69CBCA",
"G1 c #B2B909",
"17 c #D9DC71",
"|3 c #EDF24E",
"^* c #000500",
"Fo c #343434",
"29 c #BBBBB1",
"Y  c #FDFEFF",
"2$ c #000502",
"fd c #F6F4F5",
"cX c #7AC8C8",
"2  c #000504",
"+. c #C9CFCF",
"^4 c #525500",
"3  c #000505",
"$. c #000506",
":X c #000507",
"Q: c #B4B1AA",
"Bt c #F1CB78",
"pw c #D6C398",
"{s c #BBBBB9",
"#q c #F1CB7A",
"H+ c #BBBBBB",
",@ c #617171",
"%O c #808281",
"p7 c #525510",
"6y c #D19A25",
"0p c #ABAF1A",
"Hu c #D19A26",
"K5 c #A1A42F",
"H. c #99F1F2",
"g@ c #155352",
"/< c #B2B92D",
"U+ c #0E4947",
"D$ c #030600",
"*1 c #ABAF26",
"~# c #CCD0CF",
"e2 c #B5BA15",
"vq c #F4CC77",
"9s c #41402B",
"M9 c #666B00",
"+# c #6FB5B5",
";$ c #83837B",
">- c #0D1100",
"<i c #553E08",
"QO c #838383",
"$w c #F0F366",
"P0 c #CEB16B",
"6@ c #004D4C",
"q4 c #5F6100",
"F@ c #484A47",
"^: c #41403C",
"l5 c #F0F36E",
"|* c #060700",
"Hw c #F0C368",
"x, c #171C00",
"I$ c #CFD1D0",
"<s c #B5BA3A",
"Po c #A2ACAD",
"j5 c #AEB031",
"D0 c #9A8252",
"B: c #AEB035",
"&7 c #101200",
"R: c #3D3729",
"=% c #595F5D",
"7, c #5F4917",
"K4 c #C9D022",
"Vt c #D1B271",
"y4 c #4B4B4B",
".r c #DFC68E",
"v% c #BFC53D",
"GO c #E0E6E6",
"Lr c #737706",
"}d c #D2D2D0",
"*p c #1A1D00",
"l4 c #B8BB38",
"r+ c #D2D2D2",
"xo c #80FAFB",
"&< c #D3930B",
"(t c #D3930D",
"~y c #D3930F",
">O c #979998",
"~- c #696C27",
"e9 c #CCD11C",
"Ui c #2B1A00",
")$ c #75CFCF",
"}w c #AEB065",
"<a c #131313",
"M. c #83FBFA",
"*@ c #A8AEAC",
"pq c #76780D",
"W: c #939087",
"is c #5E4100",
"'6 c #2E3300",
"2O c #94F8F6",
"C= c #767813",
"%; c #808300",
"ft c #2E1B00",
"0. c #94F8F8",
"^& c #1D1E0E",
"So c #5F6160",
"xq c #3F3000",
"vd c #514D4C",
"Mi c #1D1E19",
"B* c #EAF211",
"!a c #A4A597",
"V& c #EAF213",
"C5 c #808312",
"=1 c #EAF215",
"*d c #DFDEDC",
"Ny c #382600",
"7* c #A4A5A0",
"sO c #86FCFC",
"+r c #313400",
"I: c #080000",
"1y c #EAF221",
"Do c #A4A5A7",
"21 c #E0E735",
"*5 c #EAF223",
"2d c #9D9B9C",
"Pe c #E0E737",
"T3 c #201F0D",
"(< c #949900",
"O* c #EDF309",
"y+ c #626260",
"c- c #EDF30B",
"v> c #EDF30D",
":6 c #E0E741",
"Xa c #DBD5C9",
"su c #3B3F00",
"{4 c #272926",
"Fu c #CFA23D",
"S2 c #94990B",
"(> c #EDF313",
"#d c #E9E9E7",
"|q c #C2AE79",
"8p c #8D8F00",
"o* c #EDF315",
"ho c #E9E9E9",
"i& c #EDF317",
"8o c #89FDFD",
"_u c #343500",
"w; c #EDF31D",
"f: c #AEB0AF",
"ya c #0B0100",
"|d c #A7A6A4",
"F= c #EDF31F",
"2- c #EDF321",
"=> c #D9DD4A",
"9& c #247070",
"/d c #656364",
"*4 c #EDF32D",
"q, c #3E4000",
"K> c #3E2800",
"S3 c #EDF337",
"2+ c #ECEAEB",
"d6 c #EDF339",
"^= c #EDF33B",
"sy c #E3E850",
"!: c #AAA7A2",
"Nr c #0E0200",
"j6 c #3E400E",
"M> c #B1B1B1",
"c5 c #484B00",
"b+ c #576767",
"B2 c #68645B",
"&, c #6F6E69",
"i7 c #3E4018",
"[8 c #EDF349",
"ti c #34352D",
"xs c #A1A510",
"%y c #A1A512",
"`, c #F0F42D",
"*0 c #F0F42E",
"`+ c #FDFFFC",
"R% c #386E6E",
"_w c #F6F5F1",
"m: c #EDF351",
"v$ c #000600",
"=  c #FDFFFE",
"pd c #F6F5F3",
"Le c #A1A51A",
"4  c #000604",
"-& c #525600",
"v. c #000605",
"!* c #979A2F",
"K  c #000606",
"r  c #000607",
"-: c #ABB00C",
"_5 c #F0F43B",
" q c #E6E952",
"zd c #B4B2B3",
"[a c #E6E954",
"Ss c #6B6559",
"$6 c #4B4C00",
"6$ c #001E1D",
"u$ c #001E1E",
"J# c #99F2F0",
"Q8 c #ABB01E",
"e< c #3E403D",
":a c #E3E881",
"]& c #A1A534",
"t- c #3E403F",
"V0 c #1B0E00",
"hr c #F0F455",
"Z7 c #414127",
"`$ c #003636",
"o6 c #555703",
"u. c #C5C7C6",
"F# c #003637",
"I8 c #555704",
"=d c #BEBDBB",
"B> c #140400",
"!q c #55570E",
"t. c #8A8E8F",
"_< c #E6E978",
"@p c #5F6200",
"wd c #7C7A7B",
"Cq c #1E0F00",
"n; c #414141",
"4% c #060800",
"+@ c #3B9F9D",
"1% c #060807",
"Hd c #C8C8C6",
"/0 c #696D00",
"y5 c #C8C8C8",
"mr c #F7CE7E",
"|7 c #B8BC1F",
"7y c #D09314",
"w3 c #101300",
"ed c #868583",
"Be c #5F4A1D",
"D3 c #737800",
"g& c #090900",
"6  c #171D1B",
"3e c #D2D3CD",
"l# c #144C4B",
"v6 c #1A1E00",
"xw c #090907",
"}. c #80FBF9",
"VX c #ACB8B8",
"<% c #090909",
"re c #9D844E",
"$1 c #C6A04B",
"8. c #91F8F7",
"+> c #131400",
"@  c #909090",
"q1 c #242900",
"|< c #4E4D4B",
"j3 c #433A13",
"O< c #241100",
"09 c #CCD22A",
"Zu c #C9A142",
"Rd c #D5D4D2",
"6s c #BBBD38",
"xe c #CCD234",
":u c #1D0700",
"~q c #BBBD3E",
"Wt c #1D1F0A",
"]r c #AE996C",
"t3 c #808400",
"[0 c #B1B255",
"~, c #CCD23E",
"d8 c #272A00",
"l& c #1D1F14",
"!3 c #808409",
"v+ c #585856",
"H: c #80840B",
"'s c #585858",
"ia c #EAF30E",
"9t c #ECD39B",
")y c #271200",
" < c #DFDFD7",
"8, c #0F0B02",
"It c #8A8F00",
"22 c #AA9053",
"K= c #202000",
"<+ c #DFDFDF",
"B. c #86FDFB",
"Ye c #EAF31C",
"bw c #626353",
"Iu c #614300",
"y7 c #CFD336",
"Y> c #080100",
"{w c #9D9C97",
"{d c #9D9C98",
"hX c #A4A6A5",
"zp c #767932",
"%d c #9D9C9A",
"pe c #7D6B3B",
"I5 c #8A8F11",
"Ew c #CFD341",
"y> c #EDF408",
"L= c #2A2B00",
"]e c #E1C07D",
"nd c #5B595A",
"O: c #EDF410",
" i c #2A1300",
"I3 c #80842F",
"2> c #120C00",
"Q4 c #EDF412",
"y: c #EDF41A",
"'0 c #9EA500",
"<& c #EDF41B",
"65 c #D9DE43",
"U1 c #0B0200",
"k> c #CFD358",
"Cd c #A7A7A5",
"(y c #72581D",
"p@ c #82F4F4",
"A% c #A7A7A7",
"R- c #343605",
"A1 c #979B00",
"q: c #EDF428",
"72 c #EDF42A",
"[& c #D9DE50",
">a c #808449",
">% c #656462",
"fu c #E3E93F",
"r* c #EDF42C",
"dp c #DCDF36",
"t= c #3E4100",
"I7 c #EDF432",
"Xf c #F3F5F4",
"z5 c #EDF435",
"D& c #275A5B",
"E= c #B1B2AA",
"Ta c #979B12",
":3 c #F0F51C",
"P7 c #CFD375",
"(- c #F0F51D",
"n< c #674500",
" 6 c #484C00",
"o, c #F0F525",
"N1 c #EDF446",
"w5 c #F0F527",
"Dd c #6F6F6D",
",5 c #F0F529",
"'d c #6F6F6F",
"rq c #ABB100",
"Z$ c #000700",
"h1 c #2D2C27",
"|; c #979B2A",
"/$ c #000701",
")* c #001F08",
"1, c #CE9B30",
"%@ c #F6F6F4",
"l6 c #F0F536",
"S* c #F6F6F6",
"C4 c #525700",
"t# c #000705",
"J  c #000706",
"x  c #000707",
"Q3 c #F0F539",
"H  c #000708",
"b3 c #E6EA4D",
"5> c #71500B",
"nw c #B4B3AF",
"P, c #110400",
"Pd c #B4B3B1",
":9 c #F0F540",
"E5 c #F0F541",
"F; c #ABB113",
"vu c #797A74",
"Z: c #4B4D00",
"hq c #F1CD83",
"r3 c #4B4D02",
"Ow c #9A9C1F",
"&# c #001F1E",
",, c #D19C28",
"b% c #A1A630",
"}p c #D19C2A",
"M0 c #37372F",
"Nd c #727071",
"Ea c #F0F551",
"`8 c #F0F553",
"yr c #A4A71A",
"w9 c #555800",
"m% c #555801",
"G3 c #ABB12B",
"oe c #EDC46C",
"N= c #F0F55B",
"Bd c #BEBEBC",
"$2 c #A4A722",
"!1 c #BEBEBE",
"I2 c #555809",
"6r c #F4CE83",
"+d c #7C7B79",
"uu c #A59774",
"@8 c #5F6300",
"0% c #F3F64D",
"TO c #9CF4F5",
"5* c #060900",
"<  c #0D1313",
"Se c #5F630F",
"-. c #7DFBFA",
"v* c #9FDDDC",
"[i c #D0940F",
"4> c #937A42",
"di c #D09410",
"Vo c #C8C9CB",
" 9 c #4E4E1C",
"zt c #D09412",
"Ko c #8EF8F6",
"eu c #F6F743",
";y c #B8BD22",
"jp c #C2C810",
"w% c #101400",
"^. c #8EF8F8",
"xd c #868684",
"/t c #D09418",
"OX c #868686",
"l1 c #58410F",
"M& c #B8BD2D",
";5 c #55583B",
" 3 c #090A00",
"9+ c #80FCFA",
"*i c #D3950C",
"G, c #D3950E",
"@9 c #090A0C",
"[- c #020001",
"%< c #D39510",
"o3 c #AEB254",
"1= c #131500",
"d. c #91F9F8",
"q$ c #91F9FA",
"0o c #5C6262",
"qd c #4E4E4C",
"ts c #845E0D",
"yt c #0C0B00",
"%: c #4E4E4E",
"7: c #1D2000",
"QX c #D5D5D5",
"g+ c #7CF3F1",
"|y c #050100",
"(a c #BB8E31",
"&2 c #808500",
"Js c #161600",
"Fd c #939290",
"0: c #EAF408",
"Np c #5E430C",
"Op c #EAF40A",
"-8 c #767A1B",
"P< c #272B00",
"Lw c #6C572A",
"q0 c #797B00",
"Qd c #514F50",
"76 c #D9DF1B",
"L3 c #CFD42F",
"Gs c #202100",
"_s c #161614",
"[p c #C59936",
"R6 c #BBBE57",
"F6 c #9D9D91",
"#, c #161616",
"hi c #080200",
"N2 c #200900",
"MO c #5CAAAA",
"Hr c #838600",
"%8 c #C5C94E",
"(O c #9D9D9D",
"-; c #6F702A",
"!, c #EDF50A",
"T7 c #2A2C00",
"dd c #5B5A56",
"c= c #EDF50C",
"^o c #626463",
",d c #5B5A58",
"n- c #EDF50E",
"W5 c #D9DF35",
"Eu c #2A1400",
"K7 c #8D9100",
"wi c #797B27",
"`; c #EDF516",
"-r c #D9DF3D",
"k+ c #E9EBEA",
"%9 c #343700",
"89 c #8D9109",
"R. c #AEB2B3",
"A< c #341F00",
"b@ c #519797",
"o> c #EDF526",
" y c #EBCC8B",
"(, c #656563",
"e@ c #122523",
",6 c #8D9119",
"+5 c #656565",
"J1 c #EDF530",
"I6 c #3E4200",
"q% c #83862F",
"62 c #D9DF57",
"o< c #150E00",
"86 c #F0F616",
"Is c #ECECEA",
"Q& c #8D9122",
"tX c #ECECEC",
"p- c #C8CA67",
"Tt c #EDF53D",
"45 c #373800",
"ae c #0E0400",
"c8 c #EDF540",
"85 c #F0F620",
"v= c #F0F622",
"G2 c #E6EB36",
"j; c #F0F624",
"d9 c #979C1E",
"*- c #E6EB39",
"f9 c #8D9132",
"x6 c #DCE04E",
"HX c #3F7A78",
"(e c #686667",
"a2 c #F0F630",
"+% c #000800",
"j> c #F0F632",
"^# c #F6F7F2",
">: c #E6EB46",
"@2 c #F0F634",
"*9 c #E6EB47",
"{@ c #000805",
"e% c #000806",
"C$ c #2A5C5B",
"F. c #000807",
"b* c #00200E",
"p. c #000808",
"-1 c #909224",
"3* c #F0F63A",
"[  c #000809",
"z4 c #F0F63C",
"He c #110500",
"Fi c #B4B4B2",
"Py c #4B4E00",
")# c #373828",
"E: c #6B675C",
"e4 c #F3F726",
"V6 c #A4A80B",
"7t c #F0F64A",
"r. c #002020",
"S0 c #F1CE8A",
"=8 c #F0F64C",
"lq c #F0F64E",
"<, c #D19D2D",
"L5 c #A4A815",
"Iw c #1B1000",
"j, c #F3F731",
"C, c #D19D2F",
"61 c #90923E",
"nt c #F9F8F4",
"m8 c #555900",
"Wr c #74520A",
"X@ c #003838",
"z# c #003839",
"/8 c #9A9D36",
"l% c #F3F73E",
"Ly c #AEB311",
"'o c #8BF8F5",
"Eq c #F4CF81",
"6p c #3D2200",
"7< c #4E4F01",
"+4 c #F3F748",
"%  c #7C7C7A",
"g3 c #AEB31B",
"I% c #F3F74A",
".d c #7C7C7C",
"bi c #4E3701",
"+3 c #F3F74B",
"!& c #4E4F0B",
"6= c #060A00",
"U% c #E6EB84",
"/e c #414342",
"'. c #484D50",
"l0 c #585A00",
"D. c #141E1F",
"R$ c #F3F75A",
"{a c #F6F83B",
"Ca c #C1C0BB",
"k& c #C8CAC9",
"Xe c #F0C670",
"(r c #F0C672",
"4r c #F7D083",
"p5 c #A4A84A",
"Hp c #D09517",
"L< c #626500",
"T  c #868789",
">@ c #7F7D7E",
"uo c #253333",
".6 c #090B00",
"B8 c #62650C",
"Au c #8F722E",
"Rt c #F6F857",
";+ c #D9DFDF",
"ut c #6C7001",
"iX c #7CC4C3",
"Dp c #1A0800",
"mt c #020100",
"Ps c #CBCBCB",
"@$ c #6EB0AF",
"Hs c #131600",
"va c #845F07",
";1 c #C5CA16",
"]$ c #609C9C",
"Pq c #BBBF2C",
"|= c #767B00",
"i: c #0C0C00",
"mp c #845F0F",
"-# c #6EC8C8",
"0r c #A0874E",
"e+ c #0C0C0C",
"]8 c #6F7103",
"ep c #C2993F",
"0u c #2E1E00",
"k$ c #161700",
"l9 c #939391",
"}, c #CCD441",
"E; c #939393",
"w= c #6F710C",
"Iq c #161705",
"e6 c #6F710E",
"Kd c #51504C",
"lp c #BBBF4E",
">d c #51504E",
"ow c #0F0D00",
"}t c #DEC185",
"A6 c #CFD52D",
"*> c #202200",
"+9 c #DFE1E0",
"'p c #200A00",
"Cp c #797C11",
"ua c #838700",
"z> c #BEC041",
"Y2 c #EDF609",
"{o c #3C4A4B",
"]d c #5B5B59",
"Wu c #2A1500",
"B9 c #EDF611",
"'= c #20221D",
"Pu c #C89B34",
"g0 c #232300",
"os c #E2E2E0",
",= c #C8CB46",
"4, c #C1912B",
"CO c #E2E2E2",
"S4 c #343800",
"R0 c #0B0400",
"63 c #E2E2E4",
"e1 c #EDF621",
"T9 c #EDF623",
"z  c #A7A9A8",
"Aa c #5E5C50",
"g< c #2D2E04",
"t: c #F0F713",
"}6 c #8D921E",
"_> c #E6EC28",
"55 c #C8CB64",
"cs c #909304",
"~5 c #2D2E0F",
"'i c #232323",
"no c #BFC8C7",
"S. c #ECEDEF",
"eq c #F0F71D",
"P3 c #373900",
"#u c #F0F71E",
"!0 c #0E0500",
"K< c #E6EC32",
"[> c #E6EC34",
"|$ c #90930E",
"/9 c #D2D65D",
"/o c #AAAAAA",
"&3 c #F0F72B",
":& c #F0F72D",
"99 c #F0F72F",
"xy c #414400",
"G$ c #000900",
"P; c #E6EC44",
"68 c #9A9E0C",
"x. c #F6F8F7",
"r$ c #7D9D9C",
">< c #F0F738",
"XX c #000907",
",O c #000908",
"vo c #000909",
"JX c #C9D3D4",
">5 c #DCE161",
"X= c #373924",
"W3 c #DCE169",
"1& c #E9ED36",
"$0 c #F0F745",
"M+ c #88F8F9",
"I* c #F3F828",
"P5 c #F0F749",
"8- c #A4A90E",
"&4 c #F3F82A",
"<@ c #002120",
"Ei c #D19E2B",
"Ls c #727272",
"m9 c #444500",
"#< c #D19E31",
"ra c #D19E33",
"57 c #F9F9F7",
"6; c #F3F839",
"_. c #F9F9F9",
"7& c #074343",
"e= c #DFE25F",
"`< c #909344",
":4 c #F3F83A",
"g, c #AEB40C",
"h> c #E9ED4E",
"p& c #F3F83C",
"C: c #E9ED52",
"7a c #7B5D1F",
"E$ c #F3F843",
"W> c #F3F844",
"~@ c #8BF9F8",
"48 c #F3F846",
"~% c #8BF9FA",
"50 c #F4D086",
"ca c #CD951A",
"5q c #9E8F68",
"rp c #CD951C",
"6, c #B28D3C",
":t c #B28D3D",
"D9 c #97855D",
"4@ c #9CF6F4",
"R+ c #4C8785",
"p; c #B8BF0F",
"3o c #3A3A38",
"Bq c #F3F856",
"u> c #F6F936",
"v1 c #585B00",
"s> c #B1B509",
"d: c #3A3A3A",
"Gt c #5C4C28",
"K9 c #F6F93A",
" r c #D5BF8D",
":. c #7DFDFC",
"Ze c #170800",
"-< c #8C7237",
"0w c #F7D180",
"q< c #4E501F",
">  c #C1C1C1",
"8s c #585B0E",
"Lq c #A7AA29",
"*w c #939450",
"U0 c #F0C777",
"xX c #8EFAFA",
"Da c #78746B",
"7# c #8EFAFC",
"H1 c #C2CA14",
"W% c #83B7B5",
"=$ c #868887",
"78 c #626600",
"wu c #F6F94A",
":i c #58430E",
"~> c #E9ED7F",
"%w c #44453F",
".y c #584314",
"U> c #211300",
"I# c #9FF7F8",
"a; c #090C00",
"=e c #F6F954",
"W. c #91E3E1",
"f0 c #5B5C00",
"t0 c #D1B67F",
"F> c #886926",
"5- c #6C7100",
"$* c #020200",
"UO c #75BBB9",
"D8 c #131700",
"F8 c #6C710A",
"j. c #67A7A6",
" X c #91FBFB",
"BX c #67A7A7",
"<t c #898987",
"u< c #6C710D",
"k< c #898989",
".0 c #656702",
"*8 c #A7AA51",
"`5 c #656706",
"Y3 c #0C0D00",
"`# c #0C0D07",
"qu c #B4B62E",
"qt c #161800",
"', c #6F7209",
"+0 c #35290F",
"J@ c #3D8381",
"s& c #EFEF7D",
"j4 c #16180A",
"z< c #51514F",
"us c #876110",
"fr c #797D04",
"ey c #797D05",
"P4 c #202300",
"fX c #E6ECEC",
")2 c #9C7F3D",
"U. c #D8D8D6",
"B0 c #080400",
":+ c #D8D8D8",
"Mt c #9C7F45",
"NO c #9D9F9E",
"/a c #5A3C00",
" * c #2A2E00",
";; c #797D1C",
"*7 c #656742",
"#7 c #83880A",
"Xy c #C8CC39",
"|# c #5F9595",
"iO c #2E3736",
"r2 c #232400",
"q3 c #C8CC43",
"<* c #C8CC44",
"K: c #E2E3DE",
"Hi c #191919",
"'4 c #343900",
"sw c #0B0500",
"b< c #230C00",
"2; c #D2D73C",
"E* c #D2D73D",
"Ur c #A0A0A0",
">w c #725B27",
"~8 c #2D2F00",
"!@ c #6DD9D9",
"Yq c #57534A",
"_6 c #F0F80F",
"m# c #8CEAE9",
"ei c #CBCD3C",
"i, c #F0F811",
"$; c #E6ED25",
"~6 c #F0F819",
"5s c #F0F81B",
"T, c #E6ED2E",
"%0 c #DCE242",
"}= c #373A00",
"IO c #84908E",
"nu c #372200",
"1. c #0B3534",
"Y8 c #F0F827",
"SX c #042B2A",
"S6 c #E6ED3B",
"0- c #F0F829",
"}8 c #303000",
"n* c #000A00",
"z+ c #686868",
"&q c #F0F833",
"Cu c #CE9E32",
"!i c #9A9F0F",
".s c #9A9F11",
"ko c #000A08",
"k. c #000A09",
"it c #F3F91B",
"Ir c #909426",
";O c #000A0A",
"@X c #EFEFEF",
"ta c #6A4900",
"X6 c #3A3B00",
"Z+ c #1C4A48",
"_; c #E9EE32",
"-2 c #DFE348",
"n6 c #F3F923",
"gX c #B4B6B5",
":0 c #4B5000",
"X- c #F3F925",
"ir c #E9EE39",
"yw c #868944",
"gu c #E9EE3A",
"t9 c #F3F927",
"x5 c #9A9F1F",
"u, c #E9EE3C",
" : c #444600",
"Y= c #9A9F29",
"20 c #221C0E",
"#; c #F3F933",
"t$ c #689898",
"X9 c #F3F935",
"!4 c #F3F937",
"w< c #30302E",
"na c #E9EE4C",
"s- c #F3F93D",
"h; c #F3F93F",
"KX c #C5CBCB",
"Ot c #E9EE53",
"x% c #F3F941",
"uO c #B7B7B7",
"X. c #184143",
"!9 c #4E5104",
"B6 c #A7AB0C",
")a c #CD961F",
"l. c #4F5958",
"|> c #E2E455",
"C< c #CD9621",
"l7 c #F6FA31",
"T# c #9CF7F8",
"9u c #554315",
"3s c #F6FA33",
"n0 c #F6FA34",
"8t c #4E390C",
"My c #170900",
"i# c #4CA0A0",
"[X c #8EFBF8",
"Ey c #C1C2C4",
"H3 c #E9EE7A",
"Ht c #B1B61C",
"ni c #B1B61E",
"`s c #7F7F7F",
"R2 c #A7AB33",
"p% c #035352",
")  c #9FF8F6",
"se c #4A4800",
"M% c #090D00",
"[< c #FFFCF7",
"vt c #1A0A00",
"]1 c #020300",
"*o c #CBCDCC",
")q c #F3C973",
"}q c #2B1F00",
"|, c #131800",
"Qa c #B1B638",
"si c #D39818",
"`r c #AAAC2D",
"@= c #656800",
"Xt c #5B5D14",
"S1 c #656801",
"W- c #BBC129",
"Lo c #609E9D",
"Yt c #767D00",
"F0 c #241500",
"p: c #0C0E00",
".7 c #515230",
"P. c #9BEFEF",
"(3 c #65680D",
"o& c #1D2300",
"go c #474747",
"y8 c #CECEC6",
"]o c #8DDBDB",
"51 c #050400",
")u c #B4B732",
"T. c #CECECE",
" u c #2E2000",
"4& c #161900",
".+ c #71B3B2",
"js c #BEC227",
"Rw c #686903",
"cq c #D7B971",
"6o c #639F9F",
"K# c #558B8B",
"<6 c #0F0F03",
"$e c #ECD7A2",
"A5 c #202400",
"lr c #D8D9D3",
")9 c #BEC23A",
"gi c #200C00",
" 0 c #080500",
"b  c #82C8C6",
"R3 c #0F0F0F",
"br c #312100",
"E4 c #191A00",
" % c #838905",
"Zw c #969694",
"Vq c #72740F",
"8X c #969696",
"a> c #7C7F00",
"(i c #BEC254",
"x& c #232500",
"Os c #DBDAD5",
"ja c #E2E4E3",
"St c #868A00",
"3a c #342200",
"(2 c #CFA74F",
"X# c #82F8F8",
"g% c #85C9CA",
"st c #7C7F16",
"%X c #77B5B4",
"Z= c #2D3000",
",e c #D2D844",
"fo c #A0A1A3",
"E  c #3C7C7C",
"Tw c #453708",
"1t c #E4C585",
"wt c #D5D92D",
"h9 c #F0F914",
",* c #0E1F00",
"v< c #151106",
"c* c #A4F2F2",
"kX c #232524",
"K0 c #0E0700",
"n: c #7C7F30",
"Y. c #E5E5E5",
"=O c #85F9F6",
"Tu c #1F1C00",
"f. c #85F9F8",
"rs c #603F00",
"de c #D5D944",
"_q c #E7C681",
"Ue c #414600",
"5= c #000B00",
"Fp c #9E7929",
"=q c #898B10",
"@; c #D5D94E",
"P: c #181204",
"@+ c #615F60",
"., c #E9EF29",
"'7 c #F3FA16",
"li c #CE9F35",
"%s c #CE9F37",
"9r c #DFE43F",
"<y c #E6EE4D",
"dX c #000B09",
"]- c #262624",
"V+ c #F6FAFB",
"yX c #000B0B",
"Qs c #262626",
"Pw c #757541",
"n7 c #3A3C00",
"a9 c #110800",
"]y c #ECF013",
"^3 c #F3FA20",
"=2 c #F3FA21",
"k2 c #E9EF35",
"$% c #154140",
">= c #E9EF37",
"bO c #88FAFA",
"c# c #88FAFB",
"}+ c #ADADAD",
"-q c #4B3900",
"c@ c #002321",
"eo c #002322",
"C6 c #9DA106",
"X; c #F3FA2E",
"Qw c #E9EF43",
"x7 c #444700",
"c7 c #F3FA30",
">u c #A88436",
"}7 c #E9EF45",
"8= c #F3FA32",
"R, c #ECF027",
"_o c #F9FBF8",
"5X c #F9FBFA",
"Z9 c #F2F1ED",
"y; c #F3FA3A",
"z% c #F3FA3B",
"kq c #4B3913",
"0@ c #2D6061",
"3& c #4E5200",
"[q c #DFE46E",
"s@ c #8BFBFC",
"oi c #A47B21",
"Oe c #F4D28A",
"!6 c #F6FB2B",
"J7 c #F6FB2D",
"a@ c #50C2C2",
"S7 c #F6FB2F",
"G: c #ECF043",
"Ki c #757575",
"A$ c #060D00",
"Q$ c #ECF044",
"Gp c #D4A134",
"Jy c #A7AC1C",
"87 c #E9EF6B",
"C# c #FCFCFA",
"U  c #FCFCFC",
"Vp c #F6FB3D",
"1w c #C0A369",
"z1 c #100000",
",p c #D0981F",
"Z. c #525B5A",
"}> c #4A4900",
"#= c #B1B723",
"t6 c #EFF145",
"9q c #ECF068",
"]* c #5B5E00",
"== c #020400",
"9  c #FFFDFE",
"Qe c #FFFDFF",
";4 c #AAAD2A",
"@O c #C4C4C4",
"%2 c #656900",
"]i c #D3991E",
"P+ c #599595",
"|4 c #0C0F00",
"n@ c #131919",
"v; c #050500",
"j  c #D5D9DA",
" @ c #78BEBC",
"qw c #EFC169",
"n= c #161A00",
"*r c #050507",
"mw c #2E2101",
"V@ c #75EDEC",
"d# c #1E7473",
"Ou c #BEC328",
"A: c #686A00",
"H& c #6AAAA9",
"$p c #B4B83F",
"n, c #8C8C8C",
"t, c #0F1000",
"(X c #324242",
"#+ c #5F6769",
";6 c #B4B847",
"%7 c #B4B84A",
"Ms c #0F1008",
"@7 c #5E5F23",
";o c #97E7E6",
"9X c #215D5D",
"'u c #727500",
"92 c #C8CE2C",
"g6 c #BEC342",
"jr c #72750A",
"Wi c #C59D45",
"je c #72750C",
"ma c #B7B93C",
"Xu c #B19F77",
">* c #012C11",
"aw c #3B2D00",
"j: c #7C8008",
"E- c #232600",
"zq c #0B0700",
";8 c #191B1A",
"+, c #C8CE4A",
"Z% c #DBDBDB",
"=y c #1C1C00",
"u= c #5E5F57",
"@: c #868B0D",
"g4 c #C1C451",
"U4 c #757618",
"wa c #CB9F34",
";q c #E4C688",
"n8 c #1C1C12",
"-0 c #D5DA35",
"q8 c #C1C45B",
"_r c #0E0800",
"^7 c #1C1C1A",
"j1 c #260F00",
"Ka c #CB9F3E",
"=: c #1C1C1C",
"&0 c #D5DA3F",
"%. c #0B3736",
"G> c #6E5417",
"}< c #9C9992",
"l- c #CBCF54",
"]. c #468887",
"[$ c #000C00",
"24 c #E9F024",
"l* c #1C3434",
"`@ c #8FEDEC",
"1# c #2D3130",
"Ya c #ECF10E",
"N9 c #E9F02E",
"a  c #000C0A",
"$X c #000C0B",
" 4 c #3A3D00",
"'  c #EFF1F0",
"Uo c #000C0C",
"5: c #E9F031",
"(+ c #000C0D",
"ui c #E8E7E5",
"Cs c #E1DDDA",
"&p c #D5DA5C",
"_4 c #30321A",
">X c #1C4C4E",
")7 c #7F8136",
"g= c #ECF118",
"V- c #ECF119",
"T; c #898C25",
"ty c #ECF11B",
".* c #DFE54F",
"]3 c #F3FB2A",
"Fy c #E9F040",
"fO c #002423",
"4< c #ECF121",
"r@ c #002424",
"rt c #E9F042",
"Kw c #EAC881",
"S> c #A88534",
"_% c #ECF125",
"x; c #93971E",
"Mp c #D1A135",
"sq c #221E13",
"c% c #E9F04A",
"B+ c #112121",
"5u c #A17B30",
"0e c #B69957",
"dw c #3D3E00",
"j8 c #D8DB56",
"4q c #140A00",
"^t c #D1A13D",
"AO c #F2F2F2",
"qy c #C4AD79",
"Y7 c #E2E64B",
"5. c #68B2B1",
"Pt c #F6FC2A",
"@- c #ECF13D",
"Y1 c #0D0000",
"pp c #A47C24",
"/q c #969819",
"F5 c #474900",
"fi c #AB8635",
"o; c #A7AD19",
"Tp c #CD9826",
"p$ c #95EFEF",
"Ar c #C7AE6E",
"=, c #473102",
"d, c #ECF14C",
"'a c #77570C",
")s c #333333",
"Y& c #283800",
"k3 c #170B00",
"~d c #F5F3F4",
"i* c #515400",
"M8 c #ECF157",
";w c #BABAB8",
"+  c #BABABA",
"Rs c #BABABC",
"0a c #716D62",
"2@ c #307A79",
"i9 c #3D3E39",
"M# c #98F0F1",
"cr c #FFFEFA",
"od c #FFFEFC",
",a c #020500",
"Ct c #1A0C00",
".  c #FFFEFF",
"a: c #C4C5BF",
"V3 c #B4B914",
"o- c #B4B915",
"nq c #F3CB76",
"&% c #8DC5C4",
"}O c #2F4240",
"dr c #474948",
";p c #7D590B",
"{& c #EFF26F",
".= c #050600",
"M= c #EFF271",
"bq c #EFC267",
"N> c #CED0CF",
":5 c #A0A35C",
"i2 c #5E6015",
"p3 c #686B02",
"3r c #8B6D37",
"X+ c #667272",
",4 c #0F1100",
"t7 c #C8CF1F",
"+& c #4A4A48",
"*X c #9EF2F2",
"or c #686B10",
"zw c #686B12",
"kp c #727600",
"m+ c #97E8E9",
".a c #200E00",
"#6 c #080700",
"Mo c #90DEDE",
"yi c #D1D1CF",
"p+ c #82CAC9",
"p8 c #191C00",
"4= c #2A3100",
"Yr c #190400",
" & c #C1C52A",
"qs c #8F8E8A",
"#O c #969897",
"=- c #CBD01C",
"Zp c #C1C532",
")5 c #232700",
"`- c #12120A",
"E+ c #47A9A8",
"t2 c #757700",
"2% c #121212",
"tO c #82FAF8",
"E2 c #1C1D00",
"!. c #82FAF9",
"^2 c #A2842A",
"Of c #D4D2D3",
"^y c #D5930B",
"x# c #82FAFB",
"p* c #CBD035",
"T= c #2D3200",
"ki c #947018",
"9. c #93F7F7",
"%6 c #BABB46",
"E7 c #5E605F",
"wo c #313B3A",
"@s c #261000",
"fw c #C4C63F",
"*  c #E5E7E6",
"Wd c #DEDDDB",
"5, c #C49634",
"K@ c #3C9696",
"j@ c #85FBFB",
"n4 c #303300",
"%% c #7AB8B7",
"q& c #002501",
"H% c #DFE634",
"x0 c #E9F122",
"S5 c #DFE636",
"GX c #96F8F7",
"Zr c #EED291",
"J; c #DFE638",
";- c #ECF208",
"d+ c #88E4E3",
"p= c #616161",
"U; c #ECF20A",
"ge c #DFE641",
"H@ c #000D0A",
"X$ c #000D0C",
"`= c #262827",
"Eo c #000D0D",
"7% c #ECF212",
"<; c #ECF214",
"lX c #6CBCBB",
"po c #E8E8E8",
"z: c #ECF216",
"@q c #BAA36F",
"C0 c #AC8F55",
"-+ c #154341",
"3: c #CED150",
"=. c #88FCFB",
"6# c #88FCFC",
"^1 c #A6A5A0",
"(6 c #ADAFAE",
"s2 c #ECF21C",
"H7 c #F3FC29",
"U: c #0A0000",
"x- c #ECF21E",
"Nw c #F1D38B",
"r& c #ECF220",
"}5 c #D8DC47",
"c  c #002524",
"[d c #9F9B9A",
"/X c #002525",
"X: c #ECF22E",
"W7 c #3D3F00",
"3< c #E2E745",
">t c #3D2700",
"/+ c #6FBDBD",
"Z1 c #F6FD24",
"B= c #E2E74D",
"]; c #9DA31F",
"]O c #184445",
";a c #E2E74F",
"V> c #7B6126",
"g1 c #B0B0B0",
"&1 c #0D0100",
"H2 c #474A00",
"(@ c #005554",
"96 c #ECF246",
":w c #6E6D6B",
"e& c #ECF24A",
"cu c #E5E83F",
"j= c #969926",
"Q, c #8C8E3A",
"+o c #FCFEFD",
"id c #F5F4F2",
"Du c #704E06",
"0; c #515500",
"'- c #BABBB6",
"Q> c #515501",
"Aq c #D5C39B",
"Zy c #100200",
"bd c #B3B1B2",
"=t c #D09A1E",
"o% c #091000",
"N8 c #EFF344",
"hs c #AAAF17",
"): c #787876",
"12 c #BC9C51",
"t% c #98F1EF",
" = c #40401A",
"j< c #FFFFF8",
"]< c #FFFFFB",
".i c #7A590C",
"r8 c #AAAF21",
"o  c #FFFFFD",
"a6 c #51551A",
"   c #FFFFFF",
"M2 c #7A5912",
"E0 c #ADB017",
"3i c #B89345",
"gd c #7B797A",
"V9 c #5E6100",
"{e c #EFF36A",
"#y c #CDB170",
"]s c #40403E",
"8i c #4A4B2B",
"O6 c #5E6106",
"J+ c #404040",
"gt c #84641B",
"H< c #050700",
"Ae c #5E610A",
"I. c #09403D",
"4w c #C7C7C5",
"&. c #78C0BF",
"5r c #EFC36C",
"1e c #5E6112",
"K+ c #C7C7C7",
",q c #F6CD7B",
"ap c #160400",
"qe c #F6CD7D",
"E, c #F2F462",
"|e c #271900",
"A= c #0F1200",
"Sw c #F2F465",
"n2 c #C29E50",
"M  c #9EF3F0",
"s9 c #080800",
"Us c #D1D2CD",
"O& c #080806",
"2. c #D8DCDD",
"Y5 c #191D00",
"-@ c #7FFAF8",
"r> c #080808",
"+- c #6B6D00",
"8> c #190500",
"ip c #D29310",
"6w c #C1C62E",
"w$ c #90F7F6",
"uw c #2A1A00",
"|& c #121300",
":% c #8F8F8F",
"#% c #163434",
"5+ c #66A3A4",
"Ba c #121303",
"op c #757800",
")e c #231000",
"-9 c #757805",
"d  c #DBDDDC",
"15 c #1C1E00",
"6d c #D4D3D1",
"Z3 c #CBD133",
"V= c #BABC3D",
"Jd c #929091",
"^- c #262900",
"zO c #575757",
"%u c #1C1E1D",
"o7 c #898E00",
"18 c #DEDEDC",
"+X c #DEDEDE",
"8@ c #85FCFA",
"m& c #303400",
"A@ c #7EF2F1",
"Y: c #070000",
"X4 c #D8DD29",
"'* c #000E00",
"B% c #000E02",
"ys c #906813",
"Gw c #756033",
"9; c #292A00",
"aO c #81DBDB",
"^d c #5A5859",
"K% c #ECF30F",
"C  c #000E0B",
"J& c #000E0C",
"v5 c #CED249",
"~a c #E8E9E4",
"L% c #ECF311",
"'X c #000E0D",
" s c #D8DD38",
"T5 c #D8DD39",
"W+ c #208786",
"s5 c #D8DD3B",
"ZO c #1F1F1F",
"<0 c #A6A69C",
"H6 c #E2E82C",
"Q* c #ECF319",
"I- c #ECF31A",
"ru c #D1D334",
"#* c #333500",
"43 c #0A0100",
".f c #A6A6A4",
"7u c #71571C",
"t> c #8C8F0C",
"O# c #2A7A79",
"}y c #787933",
")w c #292A1C",
"%q c #715724",
"5< c #ECF32B",
"k6 c #CED264",
"Mr c #AF914B",
"1: c #333510",
"6: c #3D4000",
"w@ c #F2F4F1",
"ws c #140C01",
"2, c #CA9930",
"H# c #003E3D",
"M< c #CA9932",
"+f c #EBEAE8",
"_2 c #3D2800",
"W& c #E2E84A",
"Fs c #B0B1AB",
"9% c #EFF41B",
" 7 c #828439",
":> c #EFF41C",
"** c #B4EAEA",
"L9 c #EFF41E",
"~+ c #7DEAE7",
"Ed c #A9A7A8",
"d* c #EFF424",
"[; c #A0A50A",
"A& c #969A1F",
"+O c #6E6E6E",
"`w c #252116",
"g$ c #333534",
"B, c #704F02",
"|s c #F5F5F3",
"_7 c #DBDE59",
"(q c #C0A66D",
".: c #DBDE5B",
"$5 c #EFF435",
"jO c #F5F5F5",
"Y@ c #033F3F",
"'> c #515600",
"l+ c #F5F5F7",
"x9 c #36361C",
"!8 c #E5E94C",
";= c #E2E86E",
"Od c #B3B2B0",
"te c #100300",
"E. c #143C3B",
"|% c #EFF440",
"Jt c #E5E954",
"_0 c #4A4C00",
"aa c #E5E957",
"f@ c #253938",
"xt c #D09B27",
"|  c #75A8A9",
"P= c #A3A60F",
"hd c #716F70",
"G# c #6BCDCE",
"}0 c #DBDE77",
"xO c #363636",
"0s c #BDBDB3",
"N@ c #336566",
"4$ c #7CCACA",
"Vs c #F8F6F9",
"we c #ECC36B",
"g; c #EFF459",
"0d c #BDBDBB",
"U# c #6EB6B5",
"OO c #BDBDBD",
"'# c #60A2A1",
"gq c #F3CD82",
"l= c #0C1200",
"@d c #7B7A78",
"*s c #D39C25",
"{t c #241903",
"h0 c #B7BC0A",
"34 c #5E6204",
"u% c #9BF3F4",
"79 c #ADB11F",
"v  c #447A7A",
"D; c #050800",
"sX c #3D7071",
"[3 c #686D00",
"a& c #F2F55C",
"I  c #C7C8CA",
"#$ c #449292",
"41 c #0F1300",
"1a c #858585",
"H> c #57400A",
"m  c #9EF4F1",
"Z* c #080900",
">. c #7FFBF9",
"7$ c #82CCCB",
"&i c #D2940B",
"N. c #7FFBFB",
")d c #CAC9C7",
"*< c #D2940D",
"z= c #C1C729",
"Jw c #F2C570",
"S, c #D2940F",
"m* c #6B6E03",
"Up c #BE963E",
"(  c #90F8F7",
"2w c #2A1B00",
"w6 c #121400",
"p# c #136465",
"Jq c #646400",
"70 c #D3B471",
"B5 c #4D4D4B",
"O$ c #A1F5F5",
"Q1 c #4D4D4D",
":s c #231100",
"bo c #E2E8E8",
"ci c #BA8D28",
"=6 c #121413",
"=3 c #1C1F00",
"of c #D4D4D2",
"Vy c #BABD38",
"F- c #75790A",
"3u c #987B3F",
"ZX c #D4D4D4",
"w> c #040000",
"b1 c #6B6E27",
"-d c #92918F",
"T* c #151500",
";* c #69A5A5",
")- c #C4C835",
"G% c #262A00",
"yd c #504E4F",
"p< c #C4C83F",
"LO c #232929",
"r: c #D8DE1A",
";s c #9B7C3B",
"e- c #151513",
"a5 c #1F2000",
"Oy c #CED331",
"&a c #E9F319",
"+q c #3E3111",
"x* c #88CECE",
"f% c #85FDFC",
">s c #070100",
"u- c #616358",
"cd c #9C9C9A",
"D+ c #77E9E9",
"Qq c #301D00",
")o c #9C9C9C",
"-a c #828504",
"t& c #ECF409",
"R4 c #616362",
",& c #ECF40B",
"M6 c #D8DE32",
"Id c #5A5957",
"Z  c #343E3D",
"C& c #ECF40D",
"X% c #3A4000",
"kd c #534F4E",
"40 c #E0C083",
"%$ c #000F0D",
"t  c #000F0E",
"2* c #ECF413",
"vX c #000F10",
"h< c #64644C",
"9= c #ECF415",
"M1 c #ECF417",
"Bw c #AC915A",
"(4 c #333600",
"er c #0A0200",
"Je c #D1D43B",
"U7 c #ECF423",
"=* c #002726",
"Xs c #64645C",
"Te c #ECF425",
"n+ c #002728",
"## c #002729",
"v: c #2C2C00",
"98 c #969B03",
"26 c #EFF50B",
"WO c #646464",
"P6 c #EFF50D",
"tq c #3D4100",
"kw c #D8DE58",
"T< c #969B0D",
"c1 c #EFF515",
"uq c #EFF517",
";% c #EBEBEB",
"&* c #8ED0CF",
"!> c #363700",
";< c #0D0300",
"Q@ c #61ABAA",
"8< c #ECF43E",
"d- c #EFF51F",
"md c #A9A8A6",
"C- c #EFF521",
"U- c #E5EA35",
"E& c #EFF523",
"[9 c #EDCC85",
"5o c #485452",
"J0 c #8F9114",
"Ft c #F4D696",
"PX c #8EE8E6",
"H5 c #EFF52F",
"yy c #404200",
"8e c #170E00",
"a* c #EFF531",
"ha c #25221B",
"4- c #E5EA46",
"_1 c #EFF533",
"6* c #2C2C2A",
">+ c #2C2C2C",
"(w c #999C11",
":= c #EFF539",
"i5 c #EFF53B",
"i- c #82855A",
"s0 c #EFF53D",
"6O c #B3B3B3",
"K6 c #4A4D00",
"8& c #A2CECD",
"`d c #71706C",
"Vu c #D09C26",
"2s c #EFF549",
"9d c #71706E",
"Pr c #EFF54B",
"<= c #4A4D0A",
"d7 c #A3A715",
"S# c #091211",
"c0 c #EFF557",
"z, c #A3A71C",
"f  c #C4C8C7",
"z7 c #999C35",
"U8 c #F2F63F",
"Io c #5C6A6A",
"4: c #F2F647",
"$d c #7B7B79",
")% c #F2F64A",
"o$ c #78AAA9",
".o c #7B7B7B",
"d4 c #4D4E08",
")0 c #E8EB60",
"Y% c #969B65",
"J> c #4D3604",
"s7 c #ADB220",
"f< c #4D4E12",
"Re c #F2F657",
"67 c #999C4F",
"=X c #2F5D5B",
"': c #F2F659",
"S8 c #686E00",
"E@ c #C7C9C8",
"lt c #CF9412",
"/r c #F6CF80",
"_* c #477C6C",
"A, c #CF9414",
"4; c #858681",
"u4 c #0F1400",
"@1 c #B48C35",
",u c #CF9416",
"@< c #B48C37",
"Yu c #9C9D3F",
"~3 c #616400",
"$$ c #55908E",
"5O c #7E7C7D",
"-= c #575918",
"s$ c #434341",
"F& c #97EBEB",
"c; c #080A00",
"l< c #434343",
"I, c #61640B",
"wX c #90E1E2",
"/6 c #CACAC2",
"6e c #E5D2A7",
"s4 c #6B6F00",
"4o c #CACAC8",
"n& c #010000",
"`3 c #BABE1F",
"Qo c #CACACC",
"11 c #010002",
"Zs c #817D72",
"*6 c #4D4E40",
"i1 c #121500",
"Yd c #888785",
"c. c #545857",
"h5 c #B0B342",
"rr c #0B0B00",
"*+ c #4A7D7E",
",> c #6B6F1A",
">e c #1C2000",
"oq c #D4D5D0",
"V. c #8CD8D8",
"V, c #BA8E2B",
"JO c #82FDFB",
">9 c #6E7000",
"ye c #040100",
"m; c #C4C92F",
">8 c #151600",
"1O c #93FAF9",
"&O c #929292",
":d c #504F4B",
".& c #787B00",
"&d c #504F4D",
"`u c #151610",
"J3 c #1F2100",
"~< c #787B08",
"ks c #CED432",
":y c #1C2023",
"G< c #BDBF3A",
"Z< c #C4993B",
"me c #070200",
"e$ c #0B3B3B",
"W< c #828600",
"h% c #001000",
"U& c #002807",
"u& c #ECF508",
"(1 c #292C00",
"Z5 c #D8DF31",
"f& c #646543",
"D# c #387878",
"ad c #5A5A58",
"Gd c #5A5A5A",
"Qr c #291400",
"D@ c #00100E",
"7q c #110D02",
"uX c #00100F",
"b, c #CED44C",
"j+ c #001010",
"3. c #E1E1DF",
"t; c #C7CA45",
"x< c #E1E1E1",
"a< c #ECF51E",
"z3 c #0A0300",
"fe c #ECF522",
"N+ c #002827",
"16 c #828625",
"=w c #969C00",
"'< c #EBECDC",
"%+ c #92F2F1",
"uy c #7F6D47",
"D2 c #8C911B",
"T: c #140E00",
"]> c #EFF612",
"f= c #EFF614",
"%5 c #C7CA61",
"ls c #DBE03C",
"be c #8D8169",
"h& c #222222",
"z9 c #A9A99F",
"Et c #858719",
"O0 c #443412",
".- c #EFF61C",
"O  c #E4E2E3",
"9: c #EFF61D",
"l3 c #0D0400",
"f* c #DBE046",
"D- c #A9A9A7",
"[7 c #363809",
"$+ c #03292A",
"l; c #EFF62A",
"1* c #EFF62C",
">0 c #EFF62E",
"|u c #605C59",
"%a c #E5EB43",
"I4 c #404300",
":; c #8F921D",
"/i c #EFF634",
"%, c #F5F7F4",
"*u c #8F9221",
"pr c #E5EB49",
"x: c #EFF636",
"EX c #F5F7F6",
"Ga c #EEEDEB",
"+t c #8F9229",
"v8 c #F2F71F",
"'3 c #F2F721",
"Jo c #8AC8C7",
"L4 c #DEE148",
"{- c #4A4E00",
"B@ c #5AD2D0",
"{  c #0D3433",
"{. c #87F7F8",
"(5 c #F2F727",
"W0 c #EFF648",
"t1 c #F2F729",
"Bo c #526060",
" f c #71716F",
"B& c #F2F72B",
"6. c #98F4F3",
"&9 c #999D25",
"7s c #434400",
"K, c #D09D32",
"i3 c #545900",
"_X c #F8F8F8",
"b> c #F2F739",
"<< c #E8EC4D",
"PO c #F8F8FA",
"g- c #F2F73B",
"2p c #130600",
"5@ c #419391",
"]2 c #BDBFBE",
"9< c #F2F742",
"h, c #4D4F00",
"j7 c #A3A828",
"Ve c #F3CF83",
"%> c #E8EC57",
"[1 c #999D3C",
"+: c #F2F745",
"<p c #AA822A",
"|t c #F3CF85",
"a$ c #828685",
"13 c #C6AA60",
"V< c #CC941B",
"=s c #D39E2A",
"I+ c #9BF5F3",
"&s c #D39E2C",
"N< c #D39E2E",
"e0 c #1D1100",
"#8 c #F2F752",
",% c #393937",
"64 c #F2F755",
"J5 c #F5F835",
"(s c #393939",
")< c #575A00",
";9 c #F5F837",
";. c #7CFCFB",
"d= c #F2F75C",
"g. c #7CFCFD",
"pi c #160700",
"=i c #CF9510",
"O+ c #C0C0C0",
"01 c #0F1500",
"!  c #8DF9F9",
"f# c #176F70",
"L1 c #F5F845",
"@a c #CF9517",
"I0 c #F6D085",
"!y c #CF951A",
"`* c #6D988F",
"Ho c #586261",
":2 c #383100",
"/: c #43443F",
"P9 c #F5F84F",
"8$ c #71D1D0",
"+$ c #9EF6F7",
"k% c #F5F851",
"m> c #080B00",
"3> c #65562F",
"e5 c #F5F853",
"V  c #325F5C",
".u c #E5D3A5",
"&+ c #7FFDFA",
"Ys c #CACBC6",
"b= c #BABF1A",
"1X c #7FFDFC",
"66 c #6B7000",
"~u c #A6A942",
"*& c #010100",
"D% c #010101",
"Pi c #B08425",
"a= c #010103",
"J, c #D29612",
"m. c #90FAF8",
"pX c #90FAFA",
"|5 c #BABF25",
"0$ c #66A6A6",
"*3 c #BABF27",
"<O c #398180",
"k1 c #533900",
"$O c #888888",
"Ut c #121608",
"Fq c #5A5B17",
"ga c #464540",
"49 c #4D4F4E",
"02 c #0B0C00",
"93 c #C4CA1E",
"to c #93E3E0",
"31 c #C4CA20",
"_e c #D3B67C",
"le c #1C2100",
"&6 c #A6A95C",
"9* c #0B0C06",
"^s c #0B0C07",
"O@ c #399997",
"5i c #C4CA2A",
"Sr c #040200",
"]X c #77BBBA",
"(= c #151700",
"U2 c #B3B536",
"Ns c #50504E",
"pa c #BDC031",
"y$ c #4D7F7E",
"t5 c #505050",
"q# c #96E4E4",
"{= c #1F2200",
"2r c #0E0D0B",
"J- c #787C0E",
"^0 c #070300",
"fy c #828700",
"e7 c #181800",
"r4 c #C7CB30",
"7  c #9C9E9D",
"54 c #6E712A",
"S; c #C7CB36",
"x$ c #787C1B",
"o: c #ECF60C",
"6q c #BEB093",
"wr c #75633B",
"YX c #001110",
"rX c #001111",
"88 c #787C27",
"i+ c #001112",
"-u c #E1E2DD",
"-3 c #222300",
"6> c #523100",
"P8 c #D1D632",
"u8 c #181816",
"2y c #D1D634",
"b. c #154746",
"S% c #181818",
"M@ c #B4BDBC",
"Xw c #0A0400",
"s1 c #918B7D",
"[w c #7F6E38",
"LX c #073332",
"2a c #98958E",
"eO c #7DBDBC",
"#9 c #D1D63C",
"Wo c #808E8E",
"Ay c #BAA77C",
"7w c #1B1900",
" t c #D1D63E",
"_: c #9F9F9D",
"=@ c #509897",
"i$ c #002928",
"l@ c #002929",
"CX c #9F9F9F",
"s= c #7B7D1A",
"), c #2C2E00",
">1 c #EFF70E",
"F: c #EFF710",
"X2 c #EFF716",
"X5 c #858815",
"J% c #EFF718",
"6X c #EBEDEC",
"wq c #EFF71A",
"J6 c #E5EC2D",
"-5 c #363900",
"Cr c #443514",
"&e c #0D0500",
"Qt c #A9AAA4",
"'@ c #032A27",
"81 c #EFF726",
"3X c #032A29",
"nr c #E6C47D",
"Cw c #676765",
"83 c #404400",
"Ts c #676769",
"z2 c #929400",
"9o c #80D6D5",
"Ds c #E7E4DF",
"+a c #CD9D37",
"gO c #EEEEEC",
"$, c #EEEEEE",
"m1 c #E8ED2F",
"w* c #DEE245",
"~p c #F2F822",
"~9 c #EFF742",
"y% c #87F8F6",
":< c #4A4F00",
"+< c #705214",
"r1 c #F2F824",
"M; c #F2F826",
"E6 c #DEE24D",
"C1 c #E8ED3B",
"<4 c #8F9334",
"yp c #A07821",
"Ti c #D09E2D",
"7i c #2F2F25",
"t8 c #434500",
"as c #1A1100",
"Y< c #F2F832",
"e# c #3D4343",
"X* c #F2F834",
"v& c #434506",
"v, c #F2F836",
"9, c #2F2F2D",
"$9 c #E8ED4B",
"Ji c #2F2F2F",
"&5 c #9C9F12",
"#2 c #F2F83C",
"33 c #6C4900",
"32 c #514120",
"v9 c #F2F83E",
"}4 c #7B7D6F",
"8y c #81672A",
"X3 c #F2F840",
"fs c #4D5000",
"M3 c #9C9F1C",
"=4 c #DEE26A",
"8O c #B6B6B6",
"ea c #CC9516",
"%& c #393A28",
"Z6 c #A6AA0B",
"bs c #929433",
"K2 c #E1E351",
"Z- c #F2F84E",
"xi c #CC9520",
"H0 c #F2F850",
"N3 c #F5F932",
"L2 c #F5F933",
"Ra c #575B00",
"5w c #959523",
"FX c #7CFDF9",
"}# c #36696A",
"f2 c #A6AA21",
"n% c #9C9F36",
"b5 c #F5F940",
"+1 c #7D5E1D",
"Or c #F5F942",
"3t c #F6D183",
"14 c #F5F944",
"L& c #133737",
"#0 c #F5F94A",
"t< c #F5F94D",
"V5 c #7E7E7E",
"ba c #50510B",
"y- c #434540",
"O; c #080C00",
"|@ c #97EDEC",
"g# c #407472",
"p4 c #A6AA3B",
"T$ c #5A5C00",
"-O c #134F4F",
"<q c #C2A265",
"s  c #080C0B",
"3% c #010200",
"i@ c #78F4F4",
"ww c #F2C874",
"Ri c #D29715",
"J9 c #646700",
"I9 c #9FA042",
"Y* c #0B0D00",
"DO c #464646",
"/. c #9AEEF0",
"bu c #C6C3BC",
"s; c #040300",
"<o c #CDCDCD",
"y* c #64671A",
"R< c #151800",
"_y c #150000",
"*e c #676802",
"|w c #646724",
"l8 c #0E0E00",
"]@ c #232C29",
"^p c #1F2300",
"c: c #BDC139",
"2: c #A9AB60",
"28 c #0E0E0C",
"ve c #070400",
"37 c #C7CC2A",
"f$ c #0E0E0E",
"S$ c #181900",
";X c #A3A9A9",
"X< c #8E8B82",
"91 c #C7CC32",
"]4 c #D1D71F",
")1 c #BDC146",
")p c #959593",
"Qi c #60460B",
"P  c #616669",
"2# c #001211",
"-y c #D1D72F",
"9# c #001212",
"g7 c #222400",
"+u c #181914",
"gw c #CACD28",
"0& c #92DCDD",
">i c #0A0500",
"#4 c #747402",
"cO c #B4BEBD",
"#a c #C79C3D",
"W8 c #858901",
"}@ c #57A3A3",
"Sq c #41351B",
"[+ c #002A29",
"e. c #498F8D",
"Wy c #5C3D00",
"m= c #2C2F00",
"K$ c #92F4F3",
"(: c #5D5D5B",
"/7 c #5D5D5D",
"S@ c #7DD6D4",
"u  c #265D5A",
"9w c #A88B49",
"$t c #1B1A15",
"Kq c #363A00",
"}o c #E4E4E4",
"Xr c #362200",
"x= c #EFF825",
"94 c #DEE32E",
".q c #2F3000",
"L0 c #473700",
"[% c #EFF82B",
"~w c #85892A",
"b- c #F2F915",
"xa c #CD9E34",
"Uq c #EEEFE9",
"k  c #F5F9FA",
"(p c #252525",
":* c #98DEDC",
"@5 c #393B00",
"82 c #F2F91F",
":1 c #F2F920",
"[6 c #E8EE36",
".O c #87F9F9",
"N5 c #888A25",
"ue c #85713F",
"!$ c #929514",
"74 c #EBEF1C",
"+e c #7E6735",
"l, c #F2F92D",
"h@ c #98F6F5",
"P$ c #717372",
"69 c #E8EE42",
",X c #98F6F6",
"D1 c #F2F92F",
"Rp c #A78335",
"f6 c #F2F931",
"Hy c #2F302A",
"47 c #2F302B",
"^e c #1A1205",
"lw c #F2F937",
"m, c #F8FAF7",
"_t c #D09F36",
"r< c #929524",
"#3 c #E8EE4C",
"Q- c #F2F939",
"@. c #F8FAF9",
"O7 c #F2F93A",
"#w c #E8EE5A",
"u2 c #F2F947",
"J. c #8AFAFB",
"39 c #B6B7B9",
"$i c #A37A20",
"9- c #F5FA2A",
"$# c #828888",
"m5 c #F5FA2C",
"6% c #F5FA2E",
"As c #241D0B",
"w, c #EBEF42",
"Mu c #D3A033",
"W, c #8B8B33",
"8  c #FBFBF9",
"e* c #F5FA3B",
"2o c #FBFBFB",
"U, c #F5FA3C",
")X c #FBFBFD",
"R5 c #F5FA3E",
"u@ c #6EEAE8",
"a8 c #505200",
"h= c #F5FA46",
"zX c #8DFBFA",
"P- c #EBEF5A",
"ry c #F5FA48",
"y@ c #8DFBFC",
"=5 c #EBEF5C",
"ct c #AD852E",
"Z, c #CF971E",
"V; c #9FA126",
"Yp c #CF9720",
"^< c #080D00",
"`t c #503A08",
"j% c #798610",
"ot c #EBEF66",
"!# c #477F7E",
"p> c #5A5D02",
"T+ c #D8E1E0",
"<$ c #010300",
"p6 c #010302",
"}s c #C3C3C1",
"<e c #5A5D0C",
"ky c #121800",
"^O c #C3C3C3",
"ku c #464737",
"r7 c #959654",
"4p c #D2981B",
"`y c #120000",
"La c #D2981D",
"J2 c #5A5D18",
"k5 c #0B0E00",
"j* c #011B1C",
"80 c #5A4516",
"q5 c #6E7300",
"my c #917534",
"0y c #E1CC9D",
"Y$ c #040400",
")= c #040402",
"/& c #040404",
"O= c #040406",
" 8 c #151900",
"Di c #505244",
"Za c #84817A",
"n9 c #676900",
"Xp c #563C01",
"C@ c #8CF3F2",
"k@ c #85E9E9",
"%4 c #BDC230",
"|1 c #0E0F00",
"tr c #B3B746",
"tu c #605F00",
"N  c #96E6E5",
"L  c #232D2E",
"]p c #866216",
"Sy c #E4CD99",
"J< c #717400",
"59 c #070500",
"Y+ c #D7D9D8",
"$3 c #181A00",
" $ c #7ABEBD",
"T@ c #7ABEBF",
"46 c #71740B",
"r# c #687170",
"MX c #317171",
"}r c #717419",
"R  c #001312",
"ar c #222500",
"%3 c #C0C336",
"pO c #001313",
"y0 c #E7CE98",
"zs c #D1D833",
"3q c #0A0600",
"S- c #DADAD8",
"w+ c #DADADA",
".; c #CACE2F",
"&8 c #1B1B00",
"r, c #CACE31",
"p  c #002B28",
"F$ c #031401",
"a4 c #858A0A",
"$u c #D4D927",
".% c #858A0C",
"U< c #EFF90F",
"!= c #7E8001",
"I1 c #141100",
"Ty c #252600",
"ur c #7B7F2A",
"Uw c #B6A067",
"95 c #D4D935",
"W9 c #1B1B19",
"<u c #CA9E3D",
"2& c #888B00",
"`6 c #DEE428",
"-X c #B0B6B6",
"W4 c #D4D93E",
"C% c #A2A2A0",
"'8 c #CACE56",
"v# c #8EECEC",
"&w c #717457",
"&t c #9D792B",
"pu c #DEE43C",
"M$ c #0A4E4F",
"3, c #C6952C",
"`i c #EEF0EF",
"G8 c #DEE442",
":7 c #E8EF30",
"{1 c #F2FA1D",
"X& c #393C00",
"d& c #B9B96F",
"co c #1B4B4B",
"/  c #87FAF7",
"-e c #EBF017",
"H$ c #3A5C5B",
"iu c #4E4228",
"py c #7E682F",
"{u c #D7DA41",
"g> c #DEE44E",
"$& c #6A6A60",
"V* c #F2FA2B",
"R# c #297777",
"}& c #CACE7A",
"3; c #434700",
"{% c #F2FA33",
"Hq c #F2FA35",
"_O c #102020",
"e8 c #2F3130",
"~r c #F1F1EF",
"_8 c #3C3D00",
"so c #F1F1F1",
"w2 c #F5FB1F",
"S: c #A6AC04",
"a7 c #4D5200",
"z0 c #A6AC0A",
"{; c #F5FB27",
"/> c #F5FB29",
"07 c #D7DA65",
"Y0 c #F3D28F",
"^6 c #464800",
"-> c #F5FB35",
"3- c #F5FB37",
"Wa c #EBF04C",
"Z& c #F5FB39",
"De c #544420",
"$y c #160A00",
"`. c #FBFCFE",
"Na c #9FA217",
"Z8 c #505300",
"0= c #F5FB43",
"VO c #B9B9B7",
"<r c #B9B9B9",
"r= c #9FA221",
"O1 c #0F0000",
"}* c #5A5E00",
"l$ c #959743",
"8; c #EEF14C",
"1p c #190B00",
"u* c #010400",
".. c #326262",
"z6 c #5A5E09",
"Ci c #494917",
"Bs c #BCBABB",
"Ru c #120100",
"h: c #81817F",
"*% c #082626",
"B1 c #53540E",
"U5 c #0B0F00",
"$8 c #535410",
"np c #7C580A",
"o0 c #1C0C00",
"F% c #040500",
"}  c #356363",
"10 c #C6C5C0",
"}: c #151A00",
"$@ c #013435",
"Dy c #BDC325",
"`& c #8B8C84",
"dy c #A9AD4C",
"L$ c #70B4B3",
"*= c #676A00",
"x4 c #ACAE33",
"q@ c #5E6766",
"k= c #0E1000",
"Mw c #DDC484",
"#o c #548C8B",
"qa c #8D6D22",
"Yy c #B6B92A",
",+ c #494949",
"O5 c #ACAE40",
"N4 c #D0D0D0",
"(; c #181B00",
"`p c #8E8D8B",
"@o c #687271",
"J: c #181B0A",
"=o c #387C7B",
"X7 c #111100",
"9$ c #001413",
"R@ c #001415",
"mq c #D9BB7F",
"i> c #7B800C",
"Q0 c #0A0700",
"r6 c #B9BA38",
"Q2 c #CACF34",
"h+ c #002C2C",
"U@ c #002C2D",
"Oo c #989896",
"|9 c #7F7142",
"q6 c #747611",
"'$ c #92F6F6",
":o c #3E4E4D",
"ji c #2C1900",
"(# c #1B1C0E",
"Dr c #C0C453",
"p, c #DEE51D",
"># c #49A9A8",
"w0 c #0D0800",
"g: c #E4E6E5",
"<- c #C3C540",
"#1 c #CA9F43",
"9@ c #84FAFA",
"0t c #B6A172",
"(% c #586600",
"F7 c #2F3200",
"xu c #D7DB24",
"m4 c #1E1D08",
"0# c #1F6D6D",
"7. c #95F7F6",
"o# c #95F7F8",
"a+ c #414F4F",
"za c #A48437",
"<5 c #CDD041",
".> c #F2FB16",
"&: c #606060",
"&; c #282800",
"#r c #F2FB18",
"'+ c #F5FBF9",
"s< c #DEE53F",
"k; c #EBF111",
" d c #E7E7E5",
"s* c #EBF113",
"aq c #6A6B59",
"1- c #EBF115",
"=0 c #CDD04F",
"]9 c #AB8E54",
"Zi c #C3C564",
"f4 c #D7DB3E",
",. c #87FBFA",
"O8 c #282810",
"Me c #A5A4A0",
">6 c #EBF11B",
".8 c #9CA200",
"{2 c #EBF11D",
"h4 c #323300",
"a3 c #EBF11F",
",w c #F0D28C",
"*. c #98F8F7",
"q+ c #717576",
"y2 c #EBF12D",
"[, c #E1E641",
"H= c #EBF12F",
"Bp c #3C3E00",
"+i c #6C4C01",
"gs c #95980B",
"S9 c #4A3A18",
"sd c #EAE8E9",
"5e c #4A3A19",
";: c #F5FC23",
"j9 c #EBF137",
"g  c #BDC3C3",
"`o c #8DCDCC",
"1s c #E1E64E",
"=a c #959813",
";# c #8AFCFC",
"U$ c #AFAFAF",
"f1 c #0C0000",
"). c #747673",
"y, c #464900",
"Ip c #351C00",
"$  c #747675",
"0i c #EBF145",
"Q7 c #EBF149",
"`7 c #EEF229",
".< c #F4F3EF",
"~o c #FBFDFC",
"iw c #CDB883",
"6u c #765714",
",i c #0F0100",
"xr c #706D64",
"@> c #494A00",
"q9 c #EEF243",
"wp c #381D00",
"x+ c #777777",
"r0 c #8B754C",
"s. c #90E6E5",
"1> c #3C3E3D",
"-  c #FEFEFC",
"f; c #9FA335",
"(* c #010500",
"X  c #FEFEFE",
";  c #FEFEFF",
"i6 c #818272",
"{5 c #9FA342",
"4# c #66AAA9",
"m< c #A97E22",
"%i c #D29A1F",
"-t c #D29A21",
"Y4 c #3F3F33",
",2 c #3B1E00",
"Ne c #3F3F37",
"]+ c #202E2E",
"Ce c #C5A666",
";2 c #9B9A26",
"!o c #3F3F3F",
",$ c #040600",
"6a c #8A6D2B",
"25 c #040603",
"ju c #040605",
"#e c #A69561",
">q c #EEC269",
"5; c #ACAF2A",
"Go c #C6C6C6",
":q c #F5CC7A",
"38 c #676B00",
"ps c #150300",
"R> c #B6BA1F",
"c4 c #0E1100",
"/; c #070700",
"^+ c #7EF9F7",
"O- c #181C00",
">r c #070707",
"%r c #070709",
"O9 c #4C4B37",
"Td c #C9C7C8",
"G5 c #6A6C00",
"!r c #87847B",
"hy c #ACAF54",
"E< c #111200",
"5& c #317372",
"d< c #222700",
"No c #001513",
"(o c #535554",
")+ c #26302F",
"L# c #001515",
"n  c #99E9E8",
"90 c #0A0800",
"*# c #8BD5D4",
"V# c #DADCDB",
"UX c #8BD5D6",
"(d c #D3D2D0",
"E3 c #1B1D00",
"{: c #CAD032",
"|O c #002D2A",
"yo c #002D2B",
"ld c #918F90",
"xp c #484236",
"00 c #7E8207",
"30 c #715E33",
"ss c #4F4C47",
".w c #3D2F00",
"<1 c #252800",
"8* c #565654",
"m3 c #7E8209",
"!O c #565656",
"Gq c #CAD048",
"/5 c #888D00",
"8+ c #61B1B0",
"73 c #DDDDDD",
"@@ c #84FBF9",
",y c #858C25",
"B  c #80C2C1",
"8q c #2F3300",
"tw c #B6BA7D",
"I@ c #8EEEED",
"b6 c #929800",
"Qu c #282900",
"08 c #EBF20E",
"Ap c #393E00",
"zy c #CDD149",
"+7 c #E7E8E3",
"f- c #EBF210",
"es c #281100",
"^a c #100A00",
"!u c #D7DC37",
"-s c #CDA13E",
"r- c #1E1E1C",
"Z@ c #1F8685",
"`% c #EBF218",
"'% c #EBF219",
",1 c #E1E72D",
"'1 c #323400",
"4y c #A5A5A3",
">3 c #D7DC44",
"1o c #A5A5A5",
"u0 c #C7B795",
"+* c #EBF226",
"*q c #EBF228",
"Vi c #E1E73D",
"77 c #EBF22A",
"hw c #959906",
"-, c #A7863F",
" ; c #EEF310",
"c& c #3C3F00",
"Lp c #130B00",
"9i c #81832F",
"l  c #F1F3F2",
")3 c #EEF312",
"f, c #F5FD20",
"V8 c #EBF233",
"@3 c #EEF313",
"1d c #EAE9E7",
"-w c #E1E747",
"`a c #D0A240",
":e c #D7DC5C",
"wy c #4A3B1A",
"[e c #3C2700",
"/u c #EEF31B",
"yq c #E4E82F",
"9a c #666354",
"1< c #353500",
"Su c #0C0100",
"F9 c #CAB892",
"!7 c #EBF240",
"Ad c #A8A6A7",
"cw c #464A00",
"]: c #EEF323",
"4t c #816B3C",
"$- c #EEF325",
"9O c #6D6D6D",
"v2 c #463200",
"/1 c #242015",
"3O c #2F6361",
"~1 c #F4F4F2",
"f7 c #F4F4F4",
"Ja c #765812",
"K* c #E4E84D",
"RX c #B9BBBA",
"Ld c #B2B1AF",
"au c #E4E853",
"#5 c #EEF341",
">, c #CF9A28",
"-% c #FEFFFD",
"0  c #FEFFFF",
"ao c #353535",
"W# c #7BC9C9",
"+6 c #535600",
"9p c #E4E870",
"dt c #BCBCBC",
">2 c #120300",
"Xi c #A97F29",
"by c #D29B26",
"bX c #545E5F",
"jt c #D29B27",
"4u c #B79349",
"mo c #437979",
"{8 c #E7E962",
"z& c #040700",
"Wq c #C5A76B",
"<2 c #7C5A10",
"7= c #ACB028",
"4i c #836423",
"|+ c #A0ACAC",
"#> c #F1F45D",
"Md c #BFBDBE",
"k0 c #F1F45F",
"XO c #62A2A1",
"A> c #BA9441",
"b0 c #B6BB23",
"J8 c #848482",
"i< c #0E1200",
"h- c #F1F469",
"{+ c #276968",
"w8 c #494B4A",
"|i c #866518",
"Ie c #717700",
"S& c #070800",
"k8 c #A2A558",
"t@ c #8FDFE0",
"/% c #001600",
"d3 c #181D00",
"`9 c #C9C8C4",
"7o c #7EFAFA",
"4d c #C9C8C6",
"bp c #D1930C",
"eX c #043738",
"U6 c #B6BB3A",
"); c #6A6D00",
")t c #D1930E",
"3p c #B68B2F",
"=p c #8E8F89",
"b; c #8E8F8A",
"05 c #111300",
"p0 c #B9BC25",
"Sd c #878586",
"$r c #B6BB47",
"Gi c #4C4C4A",
"Q# c #A0F4F4",
"(& c #4C4C4C",
".5 c #747800",
")i c #0A0900",
"Vw c #221000",
"P& c #99EAEB",
")4 c #11130E",
"q2 c #747807",
"e: c #1B1E00",
"Xd c #D3D3D1",
"b: c #1B1E01",
"Kr c #6A6D1E",
"lO c #D3D3D3",
"F, c #D4940C",
"da c #6A6D20",
"D, c #D4940E",
"d1 c #413924",
"!d c #91908E",
"vO c #68A4A4",
"6+ c #6B7576",
"^5 c #565751",
"At c #C3C734",
".3 c #B9BC47",
"Ws c #4F4D4E",
"D> c #937129",
"v3 c #747823",
"G7 c #888E00",
"!s c #141412",
"ce c #9B9B8F",
",r c #141414",
"<X c #84FCFB",
"q> c #060000",
">; c #CDD238",
"g9 c #D7DD25",
"_d c #9B9B99",
"H8 c #818400",
"fa c #9B9B9B",
"04 c #777914",
"aX c #95F9F7",
"L> c #2F1C00",
",3 c #171500",
"k7 c #818403",
"%o c #95F9F9",
",9 c #6D6E2C",
"Q< c #EBF308",
"Va c #606261",
"[* c #EBF30A",
"@u c #74783D",
"x> c #EBF30C",
"o2 c #D7DD33",
"G0 c #D7DD35",
"rd c #524E4D",
"X0 c #81840F",
"X> c #EBF312",
"{< c #D9D5CC",
"p1 c #63634B",
"A; c #EBF314",
"L, c #A48646",
"J* c #818413",
"G= c #EBF316",
";, c #CDA243",
"_$ c #144444",
"^% c #91D8DA",
"C9 c #A5A6A1",
"K; c #323500",
"'q c #090100",
"lo c #7CBAB9",
"R& c #EBF322",
"$> c #EBF324",
"1+ c #9E9C9D",
"o@ c #64CBCA",
"k, c #EEF40A",
"c> c #EEF40C",
"*y c #959A08",
"j2 c #3C4000",
"H- c #EEF414",
"A. c #EAEAE8",
" e c #3C2800",
"EO c #EAEAEA",
";> c #EEF418",
",7 c #353600",
"z@ c #60AAA9",
"N; c #EEF41E",
"3d c #A8A7A5",
"I; c #EEF420",
"%= c #EEF422",
"{9 c #F3D58F",
"D7 c #E4E937",
"M5 c #DADE4C",
"Ni c #2B2B1F",
"w: c #DADE53",
"Es c #666465",
"'; c #EEF42E",
"W@ c #393F3F",
"-- c #EEF430",
"V$ c #366E6F",
"nX c #FBFFFF",
"q7 c #EEF432",
"&r c #2B2B2D",
"}3 c #EEF438",
"sp c #F1F51A",
"/= c #9FA51F",
"Fw c #383700",
"7d c #B2B2B0",
"8w c #0F0300",
"D* c #B2B2B2",
"d; c #3F4110",
"K1 c #F1F522",
"~7 c #494C00",
"ud c #706F6D",
">> c #EEF44C",
"L8 c #F1F52C",
"ny c #CF9B2B",
"N% c #010700",
"!- c #DDDF57",
"j- c #8E903C",
"io c #F7F6F4",
"T6 c #535700",
"!% c #55AFAF",
"`O c #2B5B5B",
"(u c #F1F53C",
"3+ c #BCBDBF",
"%e c #5A4911",
"]# c #0C6263",
".t c #F1F546",
"Rq c #F2CD86",
"c< c #7A7A78",
"W; c #ACB119",
"o1 c #2A2311",
"-p c #7A7A7A",
"N$ c #1D5F5E",
"y= c #040800",
"e; c #A2A637",
"B# c #121C1B",
"jw c #989B4C",
"(0 c #F1F556",
"{> c #565800",
"~X c #2E5C5A",
"{y c #F1F558",
"'2 c #B8B4AB",
"c9 c #565804",
"m7 c #676D00",
",8 c #B6BC1E",
"tp c #CE9311",
"Nt c #F5CE7F",
"]0 c #F1F562",
"w& c #374700",
"#. c #848587",
"Zd c #7D7B7C",
"mX c #505656",
"53 c #3B382F",
"C; c #070900",
"B4 c #424242",
"y6 c #F4F653",
"@4 c #F4F655",
"$a c #482C00",
"v@ c #5BB1B0",
"Xq c #C9C9C7",
"Yo c #7AC2C1",
"2= c #606314",
"Ep c #180600",
"h7 c #B9BD20",
"g2 c #111400",
"<d c #878684",
"j# c #072120",
"E# c #001718",
"#: c #0A0A00",
"G. c #497C7D",
"D< c #B9BD34",
"}1 c #C3C824",
"Gy c #0A0A08",
"K. c #81FCFA",
"b7 c #6D6F00",
"Aw c #6D6F01",
"e> c #030000",
"b# c #002F30",
"5p c #C0973F",
"<7 c #A5A768",
"ns c #141500",
"la c #2C1C00",
"BO c #91918F",
"Q  c #92F9F8",
"yO c #428A89",
"Ma c #6D6F0A",
"~O c #919191",
"Nq c #C3C836",
";& c #C3C838",
"jd c #4F4E4A",
"5d c #4F4E4C",
")6 c #CDD329",
"Zt c #0D0B00",
"/2 c #CAA242",
"Sp c #D6D5D1",
"gp c #777A09",
" - c #D7DE1F",
".9 c #CDD333",
"i4 c #CDD335",
"'t c #060100",
"%1 c #5F4304",
"@t c #1E200B",
"C3 c #818500",
"Z> c #CAA24D",
"Mq c #2F1D00",
"/# c #595951",
"F2 c #EBF407",
"n> c #C3C854",
"+s c #4B4539",
"_i c #595957",
">& c #EBF40D",
"Uu c #777A1F",
"{* c #EBF40F",
"zu c #777A21",
"i  c #225954",
"X8 c #EBF411",
"g5 c #212100",
";r c #818517",
"i= c #E0E0E0",
"4. c #0D3B3B",
"do c #A5A7A6",
"]% c #EBF421",
"Pa c #997419",
"[2 c #EEF507",
"A2 c #EEF509",
"fp c #2B2C00",
"]  c #363F3E",
"du c #3C4100",
"v- c #EEF511",
"~i c #D0D44B",
"-6 c #777A43",
"l: c #EEF513",
"Co c #212121",
"}a c #8E9106",
":: c #EEF51B",
"Bi c #EEF51C",
":O c #E3E1E2",
"c$ c #353700",
"u1 c #D0D45B",
")& c #A8A8A8",
"f> c #EEF529",
"/@ c #94F2F2",
"O, c #EEF52B",
";d c #666563",
"58 c #EEF52D",
"B$ c #8DE8E9",
"A3 c #3F4200",
"+w c #8E911C",
"w. c #86DEDF",
";e c #EEF533",
"J$ c #A5EFEE",
")8 c #8E9120",
"y. c #F4F6F5",
"&y c #EEF536",
"w7 c #8E9126",
"d5 c #F1F61D",
"gr c #EEF543",
"9e c #707068",
"L* c #F1F626",
"z; c #EEF547",
",; c #F1F628",
"Ry c #35372C",
"5y c #A6802D",
"6- c #70706E",
"Ua c #8E9136",
"zi c #CF9C29",
"71 c #E7EB3E",
"WX c #707070",
"E1 c #928260",
"=< c #CF9C2F",
"N# c #326664",
"u+ c #F7F7F5",
"3# c #7BCBCA",
"jX c #F7F7F7",
"D5 c #F1F637",
"`q c #493510",
"j0 c #F1F63A",
"<8 c #7A7B6B",
"($ c #6DB7B8",
"wO c #8F9998",
"19 c #F1F641",
"|0 c #F1F642",
"a# c #89F7F6",
"R8 c #A2A727",
"y1 c #F1F644",
"z* c #082A2B",
"{i c #D29D29",
"Ju c #D29D2B",
"T0 c #95835F",
"`0 c #040900",
"rw c #534015",
"&= c #F1F652",
"t* c #F1F654",
"4* c #565900",
"a% c #ABF1F1",
"qX c #7BFBFA",
"$o c #7BFBFC",
"x@ c #70B8B5",
"[s c #BFBFBD",
"By c #150600",
"}- c #F1F65E",
"t+ c #BFBFBF",
"{0 c #4C4E1F",
"Q. c #8CF8F8",
"G+ c #929A9C",
"B- c #F4F744",
">p c #CE9416",
"kt c #CE9417",
"&X c #8CF8FA",
"oX c #848685",
"Ud c #7D7C7A",
"jo c #576160",
"6t c #F4F74E",
"@0 c #A5A833",
"G& c #9DF5F6",
"h2 c #070A00",
"6< c #EAEC64",
" w c #DDC891",
"r% c #124D4B",
"{X c #7EFCF9",
"h. c #7EFCFB",
"Iy c #B6BD3B",
"S= c #6A6F00",
/* pixels */
"                                                                                                . .                         X                   o o                 X               o o           X       X         . . . O + @ # $ % & * = o o                                                               ",
"                                                                                                . .                       X             X       - o   X                             o o             ;             X : > , < 1 2 3 4 2 5 6 7 8 o           X                                                   ",
"                                                                                                                    . 9         . .     0 0     . . X   . .     . .         0 0                                 0 > q w e r t y u i p a 2 s d           0 0                                                   ",
"                                                                                                                X   . .         . .     * f g g h j k 0   .     . . X       0 0                               l z < 1 x c v b n m M N B V C Z A         0 0                                                   ",
"                                                                                                                                    S D F G 3 H J K L P I U           X                                 0 0 Y T K 3 R E W Q ! ~ ^ / ~ ( ) _ x ` 0                                                             ",
"                                                                                                                                  ' ] 3 [ { } |  ...X.o.x O.+.0     X                                   0 @.#.$.x %.&.*.=.-.;.;.;.:.;.>.,.<.1.K 2.                                                            ",
"                                                                                                                                3.] x 4.5.6.7.8.9.0.q.w.e.r.r t.y.o                                       u.i.p.a.s.d.f.>.:.g.g.;.;.;.h.>.Q j.k.l.- o o                                                       ",
"                                                                                                                z.X           x.c.v.b.n.m.M.N.-.h.h.h.B.0.V.C.H Z.A.                                    S.D.F.G.H.J.K.h.;.;.g.g.;.;.:.;.;.L.P.I.4 U.o o                                                       ",
"                                                                                                              Y.T.            R.1 E.W.Q.!.h.h.;.;.;.;.>.~.^./.(.J )._.              o o               `.'.[ ].[.{.}.h.;.;.;.;.;.;.;.g.g.|.}. X.XXXoX                          X                               ",
"                                                                                                        X     OX+X  X       @X#X$X%Xd.>.h.;.;.;.;.;.;.;.;.}.&X*X=X4 -X              o o               ;X:X>X,X<XN.;.;.;.;.;.;.;.:.;.g.g.|.1XM.2X3X4X5X                                                        ",
"                                                                                                        X   6X7XU           8Xv.9X0XL.h.qXqX;.;.;.;.;.;.;.h.}.Q.wXeXrXtX                0 0 0 0     Y.yXuXiXpX1Xh.;.;.;.;.;.;.;.;.;.;.;.;.;.N.aXsXdXfX        X                                               ",
"                                                                                                            gXhX      X   jXkX[ lXzX}.;.;.;.;.:.;.;.;.;.;.;.;.}.xXcXvXbXnX              0 0 0 0   = mXF.MXNXf.;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.h.pXBXk.VX                                                        ",
"                                                                                                    0 0     CXZX          AXG SXDXK.h.;.;.;.FXFXh.h.;.;.;.;.;.h.!.GXHX[ JX                        KX3 LXPX,.>.;.;.;.;.;.;.;.;.;.;.;.;.qX;.;.g.IXUXYXTX=               X                                       ",
"                                                                                                  X RXEX    WXQX          !X2 ~X0.h.qX;.;.;.FXFXh.h.;.;.qX;.:.;.h.IX^X/X(X)X                    _X`X'X]X[X{X;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.qXg.}X^X|X oU                                                       ",
"                                                                                                  @X.oXo  XoooOo        +o@ox #oQ -.;.;.;.;.;.;.;.;.g.$o;.:.:.;.g.~.%o&ox *o;                   RXx =o7.-oFX;.;.;.;.;.;.;.;.;.;.;.;.;.;.|.|.g.}X;oy :o>o      _.,oU                                           ",
"                                                                                                  <o1o    2o3o4o      X @.5oXX6od.h.;.;.;.;.qXqX;.;.;.;.;.;.;.qXg.7o8o9ovX0o0                 qowoeoro,.>.FX;.;.;.;.;.;.;.;.;.;.;.;.;.;.|.|.g.}Xtoyouoio      poaoso                                          ",
"                                                                                                0 dofo0   _.goho      X o jokolozo:.;.qX;.;.;.;.;.;.;.;.;.;.;.;.;.h.xoNXcovobo                nox mo%o>.h.;.;.;.;.;.g.g.|.|.;.;.;.;.;.:.;.;.g.}XMoNoBoX     0 VoCoZo                                          ",
"                                                                                                AoSoDo0     FoGo        o HodXJoKo;.;.;.;.;.;.;.;.;.FXFX;.;.;.;.;.;.h.m.LovoPo                IoUoYo! h.;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.g.ToRoEoWoXo      Qo!o_X                                          ",
"                                                                                                ~o^o/o    X (o)o  .     _o5ouX`o'o|.|.|.;.;.;.;.;.;.;.;.;.;.;.;.:.;.FX~ ]o[o{o9     o o     }oUo|o O.O;.;.;.;.;.;.;.;.;.;.;.;.;.|.|.:.;.;.;.h.m.XOk.oO        OO+O  @O8XX                                     ",
"                                                                                                0 #O$O    X %O&O  X     _o*O'X`oQ.|.|.|.;.;.;.;.;.;.;.;.;.;.;.;.;.;.FX=O0X-O;O:O    o o     >O,O<O1OM.:.;.;.;.;.;.;.FXFXh.h.;.;.|.|.;.;.qXh.N.2O3OdX4O      . 5O6O  WX7O                                      ",
"                                                                                                  8O9O      0OqO      0   wOk.eOrO;.;.FX;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.tOd.yOx uO          AoiOpOaOsON.;.;.;.qX;.;.;.;.;.;.;.g.g.;.;.;.;.g.h.M.dOfOwo~o      gOhOjOX kOlO                                      ",
"                                                                                                  }ozOU     poxO_X  0 0   cOXXvOpX;.;.FX;.;.;.;.;.;.;.;.;.;.;.;.;.;.;.>.bOnOvo$           mOv.3OQ h.;.;.qX;.;.;.;.;.;.;.;.;.g.g.;.;.qX;.g.xo! MOXXNO        BOVO  COZOAO                                      ",
"                                                                                                  )XSO@X    XoDOFO  0 0   GOvoHOQ h.;.;.;.;.;.;.FXFX;.;.;.;.;.;.g.g.;.h.JOKO|XLOPO.     o IO$XUOxX;.;.;.;.;.;.;.;.;.;.;.;.;.g.g.;.;.;.;.g.YOTORO$XEO      +XWO    QO!O                                        ",
"                                                                                                    ~O^O  X   /O(O        )O_O`O0.h.;.;.;.;.;.;.FXFX;.;.;.;.;.;.g.g.;.;.1X'O]OK [O.     {O}O|O +.O;.;.;.;.;.;.:.;.;.;.;.;.;.g.g.;.;.;.;.h.pX.+yXX+      X 8Xho  S o+O+                                        ",
"                                                                                                X   lO+O      ++@+XoX     0 #+$+%+&+:.;.;.;.;.;.;.;.|.|.;.;.;.;.;.;.:.;.-.Q *+r -X      COXX=+7.-o;.;.;.;.;.:.;.;.:.;.;.;.;.;.;.;.;.;.h.M.[.-+2 ;+  X   jO:+    ~O>+U                                         ",
"                                                                                                    Xo,+<+      1+2+        3+;O4+B.>.;.;.;.:.;.;.;.|.|.;.;.;.;.;.;.qX;.h.d.5+vo6+      7+XX8+zX}.;.;.h.9+>.h.;.;.;.;.;.qX;.qX;.;.;.;.!.d.0+[ q+0     X w+_.  tXe+r+                                          ",
"                                                                                                  X   t+y+u+    Zoho. .     soi+&oQ M.;.;.;.;.;.;.;.qX;.qX;.;.qX;.;.;.;.h.! p+Eoa+    0 s+Nod+JOh.;.;.>.f+g+9+;.h.h.;.;.$og.;.;.;.;.1X~ ^Xh+j+k+      X l+;   z+x+                                            ",
"                                                                                                      X c+v+po    jX. .     X b+n+m+M+;.;.qX;.;.;.;.;.;.;.;.qX;.:.;.;.;.h.~ N N+B+AO  V+C+Z+'Oh.;.h.!.A+S+D+9+;.h.N.!.JOh.g.qX:.;.h.!.NXF+XXG+X             H+J+Zo        X                                   ",
"                                                                                                o o       K++X              o L+[ P+m.;.;.;.;.;.:.;.;.;.;.;.;.;.;.;.h.h.:.L.I+U+J Y+  T+F.R+Q h.;.!.( E+W+Q+}.;.;.M.!+~+^+qX;.:.$o!.pX/+(+)+_+    X X   X AO9O+X                                              ",
"                                                                                                o o                         `+'+]+[+DXM.h.;.:.;.;.;.;.;.;.;.;.;.h.1Xh.h.;.-o7.{+r }+  |+$X @! h.;.bO.@X@o@A+>.>.f.KoO@+@@@;.;.;.N.IX#@$@3 >             %@&@AO                                                ",
"                                                                                                                              0 *@XX=@1O!.g.h.h.;.;.-.1X;.;.h.h.-@;@-.;.;.!. X:@x >@. ,@<@1@~ ;.h.xX2@3@m.>.h.f.4@5@6@7@8@;.;.h.9@,X0@x q@  o o o o     _Xho        X                                         ",
"                                                                                                  X                             w@e@r@t@y@h.h.;.;.h.N.u@i@h.h.}.p@a@JOh.;.>.s@d@F.9O9 f@g@h@f.N.j@k@l@z@zXh.>.zox@c@v@pX!.;.h.-o%ob@von@m@  o o o o                                                           ",
"                                                                                        .     0       X                           M@r N@NX}.h.;.;.h.K.B@V@K.-.!.C@Z@A@9+h.1Xj@S@D@F@G@H@J@Q !.!.Q K@L@P@.O>.,.I@U@Y@7.!.h.h.>.( T@R@i.E@    o o                                                               ",
"                                                                                        .     0                         X X       5XW@voQ@d.!.;.;.h.}.,.!@~@}.^@/@(@)@B.N.h._@`@'@]@[@{@}@xX}..O|@ #.#Q X#~.o#O#R +#xX-.;.!.! @###3 $#      o o                                                               ",
"                                                                    o o                                         0 0             o   %#3 &#*#To;.g.;.N.J.=#-#;#L.6.:#>#,#}.;.h.7.<#C 1#2#3#}X}.pX4#pO5#6#N.7#8#9#0#7.-o;.h.Toq#w#r e#5X                                                                        ",
"                                                                      o                                       X 0 0       X     o o   r#t#y#u#,.N.g.h.s@i#p#pXa#s#d#f#7.-o;.h.Q g#v.h#j#k#Q.a#,Xl#z#8.x#c#v#b#n#m#=.>.-@M+M#N#F.B#V#      X                                                                   ",
"                                                                        0 0                                                     C#Z#U A#S#koD#0X^@h.g.bOroF#G#( o#K@H#J#.O;.h.Q K#r h#L#P#NXI#U#t Y#1O{.T#R#E#W#xX>.h.L.Q#!#,O,O~#0 0 0                                                                       ",
"                                                                        0 0                                                   ^#/#(#)#_#`#5 $X'#%o!.h.~.o#f#]#0XQ [#{#V.Toh.h.Q }#r h#4 |# $.$r.X$o$O$+$@$R #$*.~.>.-oNX$$%$G CX0 0 0 0                                                                       ",
"                                                                                                            &$*$So=$OOpo5Xl -$;$:$>$,$>$<$1$2$3$4$pX!.>.A+5$6$7$0.8$9$0$q$h.1Xw$e$2 1$1$Eox v.3 [ r$t$y$u$i$p$bON.-o7.UO2#G a$>o                                                                              ",
"                                                                                                          Xos$d$w w d$f$g$h$j$<$k$l$z$x$c$,$<$v$b$n$! !.}.m$M$N$*.B$u$V$Q N.h.Q C$Z$A$S$D$D$>$v$v$F$G$Z$2$H$J$K$( NXL$&#2 P$>oo       X                                                                       ",
"                                                                                                o {OFOI$hoU$d$d$w w d$d$d$d$d$Y$T$R$E$W$Q$!$~$^$/$-+#@~@M.zX($R@)$Q#_$`$'$N.h.d.]$[${$}$|$ %.%X%o%O%+%Z$^$@%#%$%%%&%*%1 =%-%    o - 0 0             0 0     o o                                               ",
"                                                                                          ;%K+:%>%,%<%1%2%d$d$d$w w d$d$d$w 3%4%5%6%7%8%9%0%q%w%<$e%r%t%~ y%u%i%p%a%s%R d%f%N.! g%h%j%k%l%z%x%c%v%b%n%m%M%N%v$Z$B%V%G d$C%-%    o o 0 0             0 0     o o                                               ",
"                                                                        o o       XoZ%A%!OS%d$d$d$D%d$d$D%d$d$d$d$d$d$d$d$3%F%G%H%J%K%L%P%I%U%Y%T%G F.R%h@~@m.E%9$W%Q%R !%zXxo~%^%/%(%)%_%`%'%]%[%{%}%|% &.&X&o&Z$^$w d$O&+&@&S         o o                                                                   ",
"                                                                        - o   #&$&%&Y$&&<$*&w d$d$d$d$d$d$d$d$d$d$d$d$*&&&=&-&;&:&>&,&<&1&2&3&4&3%w G [ 5&6.( 6&7&%.8&2#9&7.~.~%0&q&w&e&r&,&,&t&y&u&u&i&p&a&s&d&f&g&w d$d$d$d$h&j&ZXX   o o                                                                   ",
"                                                                            k&l&&&z&x&c&v&b&*&n&d$d$d$d$d$d$d$d$d$d$w >$m&M&N&B&V&,&C&Z&A&S&>$3%w d$w 1 [ D&F&G&H&J&K&L&N+P&M+~%I&U&Y&T&R&t&,&,&t&t&t&E&W&Q&!&~&^&F%d$d$d$d$d$D%d$/&(&)&_&o . .             X                                                 ",
"                                                                        3.`&~$D$'&]&[&{&}&|&3%n&d$d$d$d$d$d$d$d$d$3%>$ *.*X*o*O*t&7%+*@*#*:$$*d$d$d$d$w h#x %*&***=*[ -*yX;**.'$:*>*,*<*1*t&,&,&,&C&2*3*4*5*&&3%w d$d$d$d$d$d$d$d$d$d$d$6*7*Zo                                                                ",
"                                                                  _.}+8*9*<$0*q*w*e*r*t*y*u**&d$d$d$d$d$d$d$d$*&n&F%i*p*a*s*K%t&O*d*f*g*>$*&*&d$d$d$d$d$w h*r j*k*l*1 G 1 z*x*c*v*b*n*m*M*O*,&,&N*B*V*C*Z*<$*&w d$d$w w d$d$d$d$d$d$d$d$n&w A*)&S*                                                            ",
"                                                                D*F*G*>$z&H*J*K*L*P*I*U*Y*3%w D%d$d$d$D%d$d$d$$*T*R*E*W*7%O*,&K%Q*N&!*z&3%d$d$d$d$d$d$d$d$d$~*h#1 ^*/*u*(*G$)*_*`*'*G$]*M*O*[*,&{*R&e&}*>$d$d$d$d$d$w w d$d$d$D%d$d$d$|* ==&.=&&X=o=o                                                         ",
"                                                              7OO=<$+=@=#=$=M*%=L%r&&=*=>$w d$d$d$d$d$d$d$d$d$==-=;=:=B*C&,&t&Q*>=,=<=<$*&d$d$d$d$d$d$D%w w d$w h#^*1=2=3=4=[$5=Z$Z$6=7=8=,&,&C&9=0=q=0*3%d$d$d$d$d$~*~*d$d$~*~*d$d$n&Y$w=e=r=t=y=u*u=[O                . .     0 0         0 0               ",
"                                                          i=p=D%a=&&s=d=8=f=,&C&g=h=j=k=<$d$d$d$d$d$d$d$w *&:$|*l=z=x=t&,&c=t&v=b=n=F%n&d$d$d$d$d$d$d$D%w w D%w 1$>$m=M=N=B=V=C=Z=A=S=D=F=,&,&G=H=J=K=G*n&d$~*~*d$d$~*a=d$d$~*~*d$*&:$L=P=I=I=U=Y=T=z&R=E=      X       . .     0 0         0 0               ",
"                o o                           X   X 0 = W=Q=d$d$w D$!=x%~=C&t&Q*^=/=(=<$w w ~*d$)=_=`='=]=[={=}=|= -.-,&,&c=O*X-o-A=Y$d$d$d$d$d$d$d$d$d$d$d$d$1$&&O-+-@-#-$-%-&-*-=---F=L%,&;-6%:->-&&n&d$d$d$d$d$d$d$d$d$d$d$d$d$:$,-<-M*1-`%2-3-4-5-5*<$6-so                                                ",
"                o o                       X         0 z 7-d$d$w 3%5*8-9-7%,&t&0-q-w-&&d$d$w ~*d$e-r-t-y-u-i-p-a-s-d-f-,&,&K%Q*g-h-j-Y$~*d$D%d$d$d$d$d$d$d$w 3%>$k-l-z-x-f-,&O*c-v-b-n-,&,&K%m-M-N-D$3%d$d$d$d$d$d$d$d$d$w *&*&3%<$|*!=B-V-O*,&,&O*C-Z-A&,-&&A-S--                                             ",
"o o                 0 0                 X           D-d$n&n&d$3%Z*F-G-H-C&,&O*M*J-,$K-d$d$d$d$d$d$d$d$d$w F%L-P-#-f-C&,&t&I-U-Y-T-R-3%d$d$d$d$d$d$d$d$D%d$3%F%E-W-Q-F=L%C&,&,&,&C&C&,&,&,&<&W$!-~-u*w d$d$d$d$d$d$d$d$w 3%:$Y$,$4%^-/-(-K%t&,&,&,&L%x-W$)-_-F%`-'-8                                           ",
"o o                 0 0               X           -$]-d$n&[-d$&&{-}-|-,&,&,& ;@-R*<$*&d$d$d$d$d$d$d$d$d$d$&&Y*.;L*t&,&,&,&X;o;O;z&<$3%d$d$d$D%d$d$d$d$d$d$:$+;@;#;{*C&[*,&,&,&,&,&,&,&,&v-$;%;&;F%3%w d$d$d$d$d$d$*&d$w *;=;-;;;:;>;,;c-t&t&c=,&,&,&O*<;1;2;3;,$==4;o                                         ",
"            . .         o o             . .     hoFod$d$d$d$d$|*5;6;g=c-,&K%7;8;9;3%w d$d$d$~*~*d$d$d$d$d$F%0;q;w;,&,&,&c-e*e;z&<$w d$d$d$d$d$d$n&n&d$d$d$r;t;y;u;n-,&,&,&,&,&,&,&,&,&C&i;p;a;s;3%w d$d$d$d$d$d$d$d$d$w |*d;f;g;h;j;k;c-,&,&c=,&,&,&,&K%V&l;z;x;c;v;b;o                                       ",
"            . .         o o         X   . .   jXn;d$d$d$d$d$d$1=m;M;7%c-,&N;B;V;b&w d$w d$d$~*~*d$w *&3%Y$C;Z;8=A;,&,&G=1;S; *u*w d$d$d$d$d$d$d$n&n&d$d$d$D;F;G;L%,&,&,&,&,&,&c=,&,&,&>&H;J;K;G*n&d$d$d$d$d$d$d$d$d$D%w *&.=L;P;I;O*U;c-,&,&,&,&,&,&c=,&t&K%.-Y;T;C;<$R;o                                     ",
"                    . .                       E;d$d$d$d$d$d$d$c;W;Q;7%c=!;~;^;,$3%d$d$d$d$d$d$d$w 1$&&/;(;);_;`;K%,&C&';];(;&&w d$d$d$d$d$d$d$d$d$d$d$d$d$z&[;{;L%c-,&,&,&,&,&,&[*,&};N*N*y;|;/;3%d$d$d$d$d$d$d$d$d$d$d$d$:$ :.:X:n-,&,&,&,&,&,&c-,&,&o:,&C&O:E&+:@:#:.=$:o                                   ",
"$O%:&:*:+ ++U       . .                     Zo=:d$d$d$d$d$w G*C;-:;:L%K%::>:,:*&w d$d$d$d$d$d$d$<:1$1:2:3:4:w;[*,&,&!;5:6:,$3%d$d$d$d$d$d$d$d$d$d$d$d$*&:$7:8:9:K%c-,&,&,&,&,&,&,&,&0:};t&q:w:e::$d$d$d$d$d$d$d$d$d$d$d$d$:$C;}=r:t:C&,&,&,&,&,&c-,&,&N*,&,&,&K%y:+:u:i:p:a:o                                 ",
"p=d$d$d$d$s:d:x+f:g:U           {Oo 0 = o o h:d$d$d$d$d$d$<$g&j:k:l:,&z:x:c:v:*&d$d$d$d$d$d$d$d$w 1$b:n:m:]%7%,&[*,&t&';M:6:G*~*~*~*d$d$d$d$~*~*d$d$d$G*N:B:V:O:,&t&,&,&,&,&,&,&,&,&,&t&t&R&C:Z:&&d$d$d$d$d$d$d$d$d$d$d$w F%A:S:D:F:,&,&,&,&,&c=,&,&,&,&,&,&C&C&K%%=G:H:z&J:K:0 X         X                   ",
"^Od$d$L:P:I:U:U:Y:T:R:E:W:Q:!:~:^:/:(:):_:(:d$d$d$d$d$d$d$F%`:':]:t&;-[:{:}:Y$n&d$d$d$d$d$d$d$w 3%>$|*|: >.>C&,&,&X>o>e&O>+>3%~*~*~*d$d$d$d$~*~*d$d$d$&&@>#>|-,&t&t&,&,&,&,&,&,&,&,&,&,&t&$>%>&>&&d$d$d$d$d$d$d$d$d$d$*&:$*>=>->;>,&,&,&,&,&,&,&,&c=,&,&,&,&C&C&,&K%:>>>,>(*<>+o                          X   ",
"5X1>d$2>3>4>5>6>7>8>9>0>U:I:Y:q>w>e>n&w d$d$D%r>d$D%d$d$d$.=t>&-`%t&y>u>i>z&G*n&n&n&d$d$d$d$d$3%7:p>a>s>d>C&,&,&C&f>g>^;,$<$w d$d$d$w d$d$n&d$d$d$d$d$&&#*h>2-O*,&,&,&,&,&,&,&,&,&,&,&,&,&j>k>K=G*d$d$d$d$d$d$d$d$d$d$:$l>z>g-<;K%,&,&,&,&[*,&,&,&,&,&,&,&x>O:b-c>c-v>b>n>m>3%M>X   0 0                       ",
"0 N>J+q>B>V>C>Z>A>S>D>F>G>H>J>K>L>P>I>U>Y>w>T>$O/&d$d$d$w S&R>E>L%,&8%W>Q>u**&n&n&n&d$d$d$d$d$<$!>~>^>/>(>,&,&c=)>_>`>S&:$d$d$d$d$d$w d$d$n&d$d$d$d$*&,$'>U-<&O*,&,&,&,&,&,&,&,&,&,&,&C&]>[>{>F%3%d$d$d$d$d$d$d$d$d$d$:$}>|> ,O*[*,&,&,&,&,&,&,&,&,&,&,&,&9=.,X,o,<;c-O,+,@,<$#,$,  0 0                       ",
"  X %,&,q>*,=,-,;,:,>,,,<,:,1,2,3,4,5,6,7,*,8,9,0,d$w w 3%q,w,l:C&L%e,r,t,*&n&d$d$d$d$d$d$d$d$*&&&y,u,H-C&,&,&,&i,p,a,s,:$d$d$d$d$d$d$d$d$d$d$d$d$*&G* :d,9:K%,&c-c-,&,&,&,&,&,&C&C&,&K%f,g,S&3%n&d$d$d$d$d$n&n&d$d$d$G*/;h,j,k,,&,&,&,&,&,&,&,&,&,&,&[*O*l,z,x,c,v,<;O,b,O-<$d$n,                            ",
"  X -%m,+ M,U:N,B,V,C,Z,A,S,D,F,G,H,J,K,L,P,w>d$d$D%d$1$&&I,h;O*,&`%U,a>Y,n&d$d$d$d$d$d$d$d$d$3%1='&T,c=,&,&,&,&C&R,E,W,&&d$d$D%d$d$d$d$d$d$d$d$d$*&:$Q,x%!,,&,&c-c-,&,&,&,&,&,&C&,&,&2*l;~,^,n&d$d$d$d$d$d$n&d$/,(,d$:$),_,`,O*,&,&,&,&,&,&,&,&,&,&,&t&O*}%',], *[,I;{,},|,,$<$.= <-         X           z.so",
"          .<X<o<*,O<+<@<#<$<%<&<*<*<S,=<-<;<e>d$d$d$d$3%F%:<><!,t&,<<<1<Y$d$d$d$d$d$w w d$d$d$S&2<3<4<,&,&,&[*,&,&5<6<7<:$d$d$d$d$d$d$d$d$d$d$d$d$w <$y,8<o:c=,&,&,&,&,&,&,&,&,&,&,&,&'%9<0<q<*&d$d$d$d$d$d$d$d$w<e<d$Y$r<t<y<[*,&[*,&,&,&,&,&[*t&t&,&!,O*M*u<5*i<p<l;a<s<d<m>f<g<h<j<X         X ++,ok<l<#,z<",
"              x<c<v<0>b<n<m<M<N<B<V<C<Z<A<Y:n&d$d$n&d$:$S<D<:&t&t&F<G<i::$d$d$d$d$d$w w d$*&w H<J<K<::,&,&c=,&,&!,--L<|*<$d$d$d$d$d$d$d$d$d$d$d$d$w 3%P<I<U<c=,&,&,&,&,&,&,&,&,&,&C&K%Y<T<R<&&n&d$d$d$d$d$d$d$d$w w *&E<W<%-<;,&,&,&,&,&,&[*,&,&t&t&t&Q<O*!<~<],^</<X;A;><(<)<_<`<C;'<o ]<[<{<}<|< 1d$d$d$d$_:",
"0 0         o -   .1X1o1U:O1K>+1@1#1$1%1&1e>d$d$d$d$n&Y,*1Z&=1t&y>!<-10*3%d$d$d$d$d$d$d$d$w 3%z&x,;1:1t&t&t&,&,&>1,1<1&&1$d$~*11d$d$d$d$d$d$d$d$d$w 3%E-21F:,&,&,&,&,&,&t&t&c-c-,&L%:13141&&*&d$d$d$d$d$d$d$d$d$d$*&516171o*K%,&,&,&,&,&t&t&,&t&y>y>t&t&t&819101q1w1e1K%Q*r1t1y1u1i1p1a1s1d1f1U:e>d$d$d$xOg1X ",
"0 0         - o       S doh1Y:0>j1k1l1z1q>d$d$d$d$*&:$L=x1c1C&,&t&s-v1&&*&d$d$d$d$d$d$d$d$w u*b1n1m1M1t&t&t&[*C&O:N1B13%w d$~*11d$d$d$d$d$d$d$d$d$w 3%V1C1!;,&,&,&,&,&,&t&t&c-c-,&L%Z1A1|*3%d$d$d$d$d$d$d$d$d$d$d$3%Y,S1&-,&,&[*,&[*,&,&t&,&K%`%D1F19-M1K%`%:=G1H1J1G=C&K%<;K1L1P1I1U1Y1T1R1E1W1w>d$Q1!1jX    ",
"                  X     0 ~1^1/1Y:I:Y:q>n&d$d$d$d$<$(1)1_1C&,&,&)>`1'1]1w d$d$d$n&n&d$d$d$3%D$[1N&o*K%,&,&,&,&K%{1}1|1w d$d$d$d$d$d$d$d$d$d$d$d$d$*&:$ 2.2!;[*t&c-c-,&,&N*N*,&,&,&C&X2o2O23%w d$d$d$w w d$d$d$d$d$3%g&+2@2!,,&,&,&,&N*N*,&K%M1#2$2%2&2k:y:K%g=*2=2A;K%K%M1!<-2;2:2>2,2<2122232Y>42*:2o        ",
"X                       0 0   $,52D%d$d$d$d$d$d$d$:$S<6272t&,&K%829202n&d$d$d$d$n&n&d$d$d$3%z&q2!<y>t&,&,&,&,&O:w2e24%*&w d$d$d$d$d$d$d$d$d$d$d$w &&r2t2y2c=t&t&c-c-,&,&N*N*,&,&,&[*>&u2i23%w d$d$d$w w d$d$d$d$d$<$r;p2a2u&[*,&,&,&N*N*C&s2d2f2g2h2j2k2::t&O*O*t&t&,&M1l2z2x2c2v2b2n2m2M2N2*,B2V2            ",
"  X                               lOC2w d$d$d$d$d$<$|*Z2#;A2Q<G=1;S2,$d$d$d$d$d$d$d$d$D%d$<$|*D2!<F2t&,&,&,&,&,&v-G2H2&&*&d$d$d$~*~*d$d$~*~*d$w <$J2K2L2i&,&,&,&C&C&,&,&,&,&c-c-,&,&t&P2I2<$w d$d$d$d$d$w w d$d$d$G*S&U28=Y2,&,&,&,&,&C&X>T2R2[=Y$E2W2j;L%,&,&,&,&,&t&81Q2!2~2^2/2(2)2_2Y1`2'2]<    X         ",
"                                  X ]2w d$d$d$d$w :$C; %W*[2t&{2}2|2>$d$d$d$d$d$d$D%d$d$d$<$ 3.3X*u&,&,&,&[*,&,&x>X3o3&&*&d$d$d$~*~*d$d$~*~*d$w <$O3+3@3K%,&,&,&C&C&,&,&,&,&c-c-,&L%N;#3m=3%3%d$d$d$d$d$w w d$d$d$:$$3%3&3t&,&,&,&c=,&G=a**3=3,$G*-3;3:3K%,&,&c=,&,&t&{,>3,3<31323338>435363                  ",
"    o o         . .                 73d$d$d$~*w 3%0*839303u&y>1*q3w3:$d$d$d$d$d$d$d$D%d$d$3%0*r<u>y>,&,&c-c-,&C&H-e3r3<$n&n&d$d$~*~*d$d$d$d$d$d$3%0*t3y3o*,&,&,&,&,&,&,&C&C&,&c=t&w;u3i3.=w d$d$n&n&d$d$D%d$d$d$d$&&p3&=a3,&,&,&,&[*O*B&;&s3d3f3 3|1g3I*7%c-,&,&,&,&c-V-X3T$h3j3k3l3z3x3c3                    ",
"    o o         . .                 j&d$d$d$~*$* 3v3b3n3k;t&y>1;m34%<$d$d$d$d$d$d$d$d$d$d$:$p:M3N3O*[*,&c-c-,&K%B3V34%*&n&n&d$d$~*~*D%d$d$d$d$w *&|*C3y3o*,&,&,&,&,&,&,&C&C&,&,&t&81Z3w-&&d$d$d$n&n&d$d$d$d$d$d$w ,$A3S3Q*,&,&,&,&t&O*F1D3F3G3H3J3|*K31;i&c-,&,&,&,&c-7%o,L3P3S&{=I3U3Y3T3jO                  ",
"            0 0                   tXR3d$n&n&d$<$E3W3Q37%C&t&y>1;!34%<$D%d$d$d$d$~*a=d$d$d$Y$~3+3x-,&,&[*C&C&,&K%^3/3Y3w n&n&d$d$d$d$d$d$d$d$d$*&&&(3L1)3C&,&,&,&,&,&C&C&,&,&,&,&,&2-_3'&&&~*~*~*d$d$*&d$d$d$w w /*4&`3'3L%,&,&,&,&t&t&]3[3{3}3|3 4S&.4e*g=,&,&,&,&,&c=C&7%L*X4o4O4+4@4#4Y$$4                  ",
"            0 0                   )od$d$n&n&d$:$O;%4&4y>,&t&O**4=4-4<$d$d$d$d$d$~*~*d$d$d$F%;4:4`%,&,&,&C&C&,&2*,;>4,4d$n&[-d$d$D%d$d$d$d$d$d$*&>$<4148%C&,&,&,&,&,&C&,&,&,&,&c=C&24}-34F%~*~*~*d$d$d$d$d$d$w w 44546474L%,&c=,&,&,&t&y:8494:3M*04h2q4w4{2,&,&,&,&,&c=,&t&C&J%i;t:7%e4r4S&t4o                 ",
"    . .                           y4d$d$d$d$a=&&u4i4j;u&,&t&O*v,p4443%d$~*a=d$d$d$d$d$d$d$F%a4h;'%,&,&,&,&,&,&'%E$s4F%d$d$d$d$d$d$D%d$d$d$d$d$3%<$d4f42-L%t&,&,&C&C&,&,&,&t&,&C&{*><g4h43%d$d$d$d$d$d$d$d$d$d$w j4k4l4z4Q*,&,&C&,&,&,&K%9:::C&8=x4m>c4v48=t&O*O*,&,&,&,&,&,&K%K%C&K%l:b4n4m4M4N4so            ",
"    . .                           B4d$d$d$D%d$S&V49<'%t&,&t&O*}%]*,$3%d$~*~*d$d$d$D%d$d$d$F%C4Z4I-,&,&,&,&,&,&%=A4S4>$d$d$d$d$d$d$d$d$d$d$d$d$1$:$h2D4I*(>t&,&,&C&C&,&,&t&t&,&B*F4G4H4&&*&d$d$d$d$d$d$d$d$d$)=.=<$y=J4K403t&,&C&,&,&,&,&t&t&O*]:L4P45*I4P;N;K%O*,&c=,&,&,&,&,&,&C&[*t&s-U4Y$Y4T4/o            ",
"    o o                 0 0     0 R4d$d$d$d$*&E4W4e,Q4,&N*!,O*!4~4,$3%a=d$d$d$d$d$d$d$d$d$F%^4g-y:,&,&c=,&,&,&2-/4(4&&d$n&n&n&n&d$d$d$d$d$d$)4_4`4'4]47;K%,&,&,&c-c-,&,&,&,&t&x-[4L<,$1$w d$d$d$w w d$d$d$d${4}4C;|4S< 5=2t&c-c-[*,&,&,&N*N*,&`%I=.5|*,$X5o5I;t&t&t&,&,&,&[*,&,&,&,&y>!<O5z&3%d$+52oX         ",
"    o o                 0 0       > d$d$d$w 3%@5#5n-[*,&N*};t&$5%51=3%~*d$d$d$d$d$d$d$d$d$,$&51;z:,&,&,&,&,&t&*5=5-5F%d$n&n&n&n&d$d$d$d$D%d$)4;5:5>5@2x>C&,&c=,&c-c-,&,&c=,&t&,5<515u*w d$d$d$d$d$d$d$d$d$d$253545556575=1t&c-c-,&,&,&[*,&,&,&L%8595=3,$05q5A4D1`%K%,&!,t&t&,&K%7%'%w5e5r5H<3%d$t5U           ",
"                                  y5d$d$d$*&&&u5I=O*c-,&};};,&i5p5Y*$*d$d$d$~*~*w w d$d$w a5s5d5K%c-,&,&,&!,y>Y<f5T%<$d$d$d$d$d$d$d$d$d$d$d$d$<$g5h5$5,&,&,&,&,&,&,&,&,&,&,&k,%-j5k5<$d$d$d$d$d$~*~*d$w d$d$d$:$I2l5z5A;K%,&c-U;C&C&,&,&C&,&,&N*K%M*x5m>D$,$c5v5b5d5n-y>y>y>c=n5m5E$M5N5053%w w B5X           ",
"                                  V5d$d$w <$S&C5!<y>O*,&t&>&X2Z5(;G**&d$d$d$~*~*w w d$w 1$A5S5t:v>c-,&,&,&t&A2D5F5>$*&d$d$d$d$d$d$d$d$d$d$d$d$G*/;G5H5!,,&,&,&,&,&,&,&,&,&t&O*J5K5|*3%d$d$d$D%d$11~*d$w *&w w k=k5L5V*t&,&,&c-c-,&,&,&,&v>,&,&};t&s2P5I5U5z&4%Y5W<T5z-W$R5s-E5W5Q5!5x&h2|*F%~53%^5U           ",
"                                2oaod$w 3%h2],/5X;u&t&,&,&X>(5m;t,*&d$~*n&d$D%<:~*~*n&*&u*)5U-F:C&C&,&,&,&,&k,_5A3u*1$d$d$d$d$d$d$d$d$d$d$d$~*&&`5'54<t&,&,&,&,&,&,&,&,&o:Q<O*}%]5,$K-n&d$d$d$D%d$d$d$d$d$w  3[5{5}5&3x>,&,&,&,&,&,&,&,&,&,&,&,&,&L%s2:4|5 6.6S&4%[=X6o6O6+6@6a5|*|*#6#:$6%6&6F%*6_.          ",
"                                ' =6d$w <$-6;6:6x-t&,&,&c=>64:,6Z*d$d$~*n&d$d$w ~*~*n&<6J316:=,&C&C&,&,&,&,&26363=u*w d$d$d$d$d$d$d$d$d$d$d$~*&&46&=y<t&,&,&,&,&,&,&,&,&N*,&t&&-56F%3%d$d$d$d$d$d$d$d$d$d$w ]1w3P<667686n-,&,&c=t&t&,&,&,&,&,&,&,&,&c-7%6%9606q6K;k$C;h2Z*h2S&/;w6H*e6r6t6y6u6,$i6X           ",
"                                Y+p6d$w 3%a6s6d6u;,&,&,&t&f6g6h6:$d$d$d$d$d$d$d$d$d$~*02j6k6l6O*,&,&,&,&,&,&O*h;z6u*w d$d$d$d$d$d$d$d$d$d$d$~*u*{=x6o>t&,&,&t&t&,&,&C&C&,&,&c6k2H*:$1$d$d$d$d$d$d$d$d$d$d$d$w &&*>v6b6n6Q4,&,&,&,&,&,&,&t&t&,&,&C&,&,&C&<;x-N3&-m6M6e2N6B6V6C6Z6A6S6&-y3P%E$D6Y$F6            ",
"                                G6w d$w 3%|*+;H6::,&,&,&>1J6R*F%3%d$d$d$d$d$d$d$d$d$~*3%,$K6L6P6,&,&,&,&,&,&k,i5I6u*w d$d$d$d$d$d$d$d$d$d$d$~*<$Z*U6Y6u&,&c=t&t&,&,&C&C&,&,&!,:=T6>$3%w d$d$d$d$d$*&d$d$d$w 3%4%R6E6W6I-L%,&[*,&,&,&,&,&t&t&,&,&C&,&,&c=,&,&O*t&)>X2;:{;]3Q6!6{;~6)>t&O*O*d2^6:$/6            ",
"                              X (6w d$w 3%z&k5)6r1t&,&,&_6`6'6>$3%d$d$d$d$d$d$d$d$d$d$$*F%R<]6F:,&,&,&,&,&,&26[6{6<$w d$d$d$d$d$d$d$w w d$d$~*3%0*}63-y>,&,&,&,&,&,&,&,&,&,&Q<r*|6 7.7==w d$w w d$d$d$d$d$3%X715o7O7I;L%K%C&,&,&v>v>,&,&,&,&,&,&c=,&,&t&,&,&,&,&,&C&L%L%X>X>(>Q4K%,&,&,&v-b4Z=Y$+7            ",
"                            X 2oP$w d$w 35@7#7u,s2t&,&,&,&$7%7&73%d$d$d$d$d$D%d$d$d$d$0**7=7-7n-,&,&[*,&,&,&O*I=4*&&*&d$d$d$d$d$d$d$w w d$w *&&&C;;7F1O*,&,&,&,&,&[*,&[*[*C&H-:7>7,7+>*&w d$w w d$d$d$d$d$==<71727#2`%,&C&x>,&,&C&C&,&,&,&,&,&,&,&,&t&t&,&c=[*,&[*,&c-,&,&N*,&,&,&,&c=K%8237T%4757            ",
"                X             OOd$d$n&*&i:67R$4<7%t&c-c-,&7787{6:$d$d$d$w w d$d$d$d$d$<$9707q7O*,&,&,&,&,&t&y>Z&w7,$3%d$d$d$d$d$d$d$d$d$d$*&e7r7a4t785,&,&,&,&,&,&,&,&,&,&7%I*y7u7G**&w d$d$d$d$d$d$d$d$d$3%i7p7a7s7+*!;,&,&,&,&,&,&,&,&,&,&,&,&};};N*N*,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&A;X;d7,$(,              ",
"                  X           f7DOn&n&*&<$g7h7]:7%t&c-c-t&Y<j7F3<$d$d$d$w w d$d$d$d$d$Y$S&k7l7y>t&,&,&,&,&,&O*&-z7F%3%d$d$d$d$d$d$d$d$d$d$3%S&x7Z3c7V&,&,&,&,&,&,&,&,&c=,&I-v7b7F%d$d$d$d$D%d$d$d$d$d$d$d$$*S&n7`>m7M7c=,&,&[*,&,&,&,&,&,&,&,&,&};};N*N*,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&'%E$N7F%(O              ",
"                X               :+#,d$d$w ,$B7V7w;,&c=c=!,3*{->$*&d$d$d$d$d$d$d$)=C7k<Z7h2A7S7y>t&[*,&,&,&C&t:D7F7<$n&d$d$d$d$d$d$d$d$d$w ]14%J3G7H7X>,&,&,&,&,&,&,&,&,&O*J7K7m>&&d$d$d$d$d$d$d$d$d$D%d$d$3%L7P7}-I7`%N*n-C&,&,&t&t&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&t&t&,&,&C&,&,&,&,&t&U7Y7T7&&R7              ",
"                                0 E7d$d$d$v;W7Q7r&,&,&C&v-!7~7<$w d$d$d$d$d$d$d$$*^7/7(7)7_7`7A2t&,&,&,&c=C&'7]7 33%w d$d$d$d$d$d$d$d$d$w 3%[7{7}7>6L%,&,&,&,&,&,&,&,&,&O*M;|7v1g73%w D%d$D%d$d$d$d$d$d$d$3%S& 8.8n6X8N*C&C&,&,&O*O*,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&t&t&,&,&,&,&,&,&,&t&Y6o8c;O8S*              ",
"                                57+8d$d$d$F%@8+:>6,&N*{*Q*#8$83%w d$d$d$d$d$d$d$d$d$d$<$g7%8H5y>t&,&,&,&[*,&P6>=j2<$w d$d$d$d$d$d$d$d$d$~**&&8*8=8s2L%,&,&,&,&[*,&,&,&,&,&f-K1k%-8F%3%d$d$d$d$D%d$d$w ;8:8w 3%>8,8v=X>c=,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&O*M*u:,$<8                ",
"                                1828d$d$d$.=3848>6,&o:`;5868~$1$w d$d$d$d$d$d$d$d$d$d$3%D;78}%y>,&,&,&,&,&[*O*h;88u*w d$d$d$d$d$d$d$d$d$d$*&:$C;98589=,&,&,&,&,&,&,&,&,&,&08m-N&q8r;3%d$d$d$d$D%d$d$p6w8e8d$d$b&r8Y6A;,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&O:|%t8:$y8                ",
"                        X       A.u8d$d$d$>$i8D=x-t&c=C-M6p8>$w d$d$d$d$d$d$d$d$d$d$d$*&Y$a8:4y>,&,&,&,&,&,&!;s8d8<$w ~*d$d$d$d$d$d$d$d$d$w $*,$f8g8I;t&,&,&,&,&,&,&,&,&t&I-h8j8k8l8*&d$d$d$~*z8d$d$d$d$d$d$~*.6x8c8>6,&,&,&,&,&t&t&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&,&,&,&,&,&t&K%v8b8p:n8^#                ",
"                              X - 8*d$d$d$&&m8M84<t&,&>6N8T6,$w d$d$d$d$d$d$d$d$d$d$d$$*:$B8W$O*,&,&,&,&,&,&!;V8C8F%3%~*d$d$d$d$d$d$d$d$d$d$d$>$Z8A82-!,,&c=,&,&,&,&,&,&!,v=S8D8|*:$*&d$d$d$~*~*d$d$d$d$d$d$d$c;F8G8R&,&,&,&,&,&t&t&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&t&,&C&,&,&t&G=M*H8F%J8                  ",
". .                               .od$d$d$:$$3K8L8O*,&L%85P8E3<$*&d$d$d$[-n&d$d$d$d$d$*&:$I8U8O*,&,&,&,&,&,&,&Y8T8_-&&d$d$d$d$d$w w d$d$d$d$n&F%R8h;'%,&,&,&,&,&t&t&,&,&c=Q*E8W8r23%w d$d$d$d$D%d$d$d$d$w w *&Y$m>Q8X;t&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&Q<,&,&,&,&t&%=!8~8&&QX                  ",
". .                               ^8d$d$d$3%Y,/8x%P*C&,&,&(8)80*3%d$d$d$n&n&d$d$d$d$d$w 3%_8`8w;L%,&,&,&[*,&,&~=48'8T%d$d$d$d$d$w w d$d$d$d$n&Y$]8[8I;,&,&,&,&c=t&t&,&,&c=`%M*{8}8n&d$d$d$d$d$d$d$d$d$d$w w |8 9~7.9E&t&,&,&[*,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&t&,&,&,&,&t&X9o9/;O9XoX                 ",
"            o o o             X 0 +9@9~*d$n&G*9;#9l;A;,&,&U7$9%9>$d$d$d$d$d$d$d$d$d$d$d$w T%&9M-s2t&,&,&t&t&t&2-*9=9F%d$d$d$D%d$d$d$d$d$d$d$d$]1|*-9;9O*,&,&,&,&,&,&C&C&,&'%:9>9F%d$d$d$d$d$d$d$d$d$d$d$D%w  3,9<9f>k;,&c=,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&,&n-19~7:$29                    ",
"            o o o               0 @.3949G*e>w>59x769F=,&,&G=#;79023%w d$d$d$d$d$d$D%d$d$d$:$k58999,&,&,&t&t&t&e,09|:Y$d$d$d$D%d$d$d$d$d$d$d$0,/;:$c&_5k,c=,&,&,&,&,&C&,&,&s2q9w9Y$~*d$d$d$d$d$d$d$d$d$d$d$*&Y$O;e9r9C&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&L%t9y9Z*u9u+                    ",
"                X X 0 0           0 I$i9q>I:p9a9s9d9L2O*,&C&7%W>f9,$3%d$d$d$d$d$d$d$d$d$d$3%Y$O;g9h9C&,&t&t&t&y:j9k9,$*&d$d$d$d$d$d$a=~*d$R3l9z9x9c9v9t&,&,&,&,&,&,&,&,&,&{2b9n9Y$d$d$d$d$d$d$d$d$d$d$d$d$l8m9M9N9B9C&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&>6+4V9F%C9    X                 ",
"                    0 0       o Z9A9q>U:S9D9F9G9H9J9K9y>Q<L%L9P9I9Y,x3q>w>e>n&d$d$d$d$d$d$3%+=~4U9Y9K%B*'%T9R9+**4E9@>&&*&d$d$d$d$d$~*~*d$/&W9Q9p:!9~9n-,&,&,&,&,&,&[*c=t&I;[, 4>$d$d$d$d$d$d$D%d$d$d$d$d$#:^9/9]6G=K%,&,&,&,&[*,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&C&(9)9|4_9f7                      ",
"                    X       o `9M,I:'9]9[9{9}9|9 0.0M*y>t&I;e&X0!243o0O0+0Y:e>d$d$d$w w ~*Y$@0#0F=x>X8]3$0%0&0P;*0l%=0p8Y$d$d$d$d$d$~*~*d$d$d$w w $3-0;0K%,&,&,&,&,&,&,&t&j;95@,F%d$d$*&d$d$d$d$d$d$d$d$d$*&&&h2:0>09=,&,&c=,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&c=,&c=,&C&(>+:,0&&<0  0 X   .               ",
"                          o 1020*,304050607080;<90001;K%F=N&q0w0e0r0t0y0u0i0e>d$d$d$w w ~*4%p0a0G=I;s0d0f0g0$3S4h0j0k0l0&&d$d$d$d$d$~*~*d$d$d$d$w y=z0;:Q4,&,&,&,&,&,&,&C&x0c0v0&&d$d$d$d$d$d$d$d$d$d$d$d$w :$F5b072A;,&,&,&,&[*,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&<;n0m0|*M057  0     .               ",
"                        0 N0B0V0C0Z0A0S0D0F0I:59c&G0v=F=H0J0K0L0P0I0U0Y0T0R0e>d$d$d$d$d$d$,$E0m5$-W0*=Q0!0~0^05*/0(0)0_0&&d$d$d$d$d$d$d$a=a=d$w ==`0'0Z1L%,&,&,&,&,&N*>&X>Y<]0[0Y3d$d$d$d$d$w w d$d$d$d$~*3%{0}0|0<;K%,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&t&O*$- q.q&&Xq                          ",
"                      o oqOq+q@q50#q$q%qY1q>G*J3}5&q*qy1=qw0-q;q:q>q,q<q1qw>n&d$d$d$d$d$d$z&2q&-w4t23q4q5q6q7q,$8q9q0qX7:$d$D%d$d$d$d$D%~*d$d$1$^<qqZ5wqK%,&,&,&,&,&N*{*eqrqH2p:Y$w d$d$d$d$w w d$d$d$d$d$<$g2tqyquqK%,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&t&C&<;iqpq0*aq                            ",
"                o o X .<sqdqfqgqhqjqkqU:w>G*F%+;|0+*lqb7zqxqcqvqbqnqmqMqY>n&d$d$d$d$d$d$w z&NqBqVqQ0CqZqAqSqw>>$d8DqFqY$*&d$d$d$d$D%d$d$d$d$d$u*6=GqHqx>C&,&n-C&,&,&,&X803;7v1JqF%n&d$D%~*~*d$d$d$d$n&n&w Y3KqLqt<c7<;,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&[*,&V&8=Pq44IqUq0     0 0                   ",
"                o o 57Yq*,TqRqEqWqQqY:n&d$:$!q~q^qU,/qw0Cq(q:qbq)q_q`q'qe>d$d$d$d$d$d$w <$]q[q{qQ0}q|q w.wXwow@,Ow+ws93%n&d$d$d$d$d$d$d$D%d$d$,-@w#wM7,&,&,&,&c=,&,&,&L%'%&3I=$wl>3%w d$~*~*d$d$d$d$n&n&%w&w*wT;);=wC-,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&C&w5-w'4&&;w  =       0                   ",
"                  - :wI:>w,w<w1w2wq>3w4w^7Y$5w@4|06w7w8w9w0wqwwwewrwI:e>n&d$d$d$d$d$d$3%h2twywQ0uwiwpwawswdwfwgwh=hw/;3%n&d$d$d$d$d$d$d$d$d$d$&8jwkwlwX8C&,&,&,&,&,&,&C&L%7%1-M-zw&&*&d$n&n&d$d$d$d$d$d$xw,$G*F%5*cw(9k,,&,&t&t&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&c-v>@3vw.0H<bwX     .                         ",
"                  nwq>mwMwNwBwVwq>CwX   ZwY$AwSwDwFwl3GwI0HwJwKwLwU:e>~*d$D%d$d$d$d$d$3%&7PwI1IwUwYwTwswRwEw:4WwN;QwB8F%*&d$d$d$d$d$d$d$d$d$d$<$z&q1!w#;V&t&t&t&,&,&,&,&,&t&O*&-~w>$*&d$[-n&d$d$d$d$d$d$d$d$d$*&&&^wh;c-,&,&t&t&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&v>g=/w(w|*)w_w.     . .                       ",
"            . . jO`w0>'w]w[w*,q>{w%,    ++==h6}w|w3q e.eXeoeOe+eU:e>n&d$d$d$D%d$d$d$d$w 3%x3@e#e$e%e&e*e=e,;-eL%K%;e:e@,==d$d$d$~*~*d$d$d$d$d$w 3%,$>e,ew5O*t&,&,&,&,&,&,&,&,&19<e<$w d$d$d$d$d$d$d$d$d$d$d$d$w <$1e48K%x>,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&C&K%X92eH4&&3eo               . .               ",
"            .   4ew>5e6e7e8e59OO-%-%    X 9e:$s;s;8w0eqeweeerete^0:$w d$d$d$d$d$d$d$d$d$yeI:ueiepeaesedew5O*,&,&t&fegehe>$d$d$d$~*~*d$d$d$d$d$d$d$3%,$je&-[*,&,&,&,&,&,&,&,&F:kele(**&d$d$d$d$d$d$D%d$d$d$d$d$w 1$Y*zea0X>,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&,&A;,5xem&&&ceo                 . .               ",
"      X       ; Q1vebenemeK-Me            %@NeyeU:BeVeoeqeCeZeveAeSeu*w d$d$d$d$d$d$~*n&Y:DeFeGeHe7wJe6%k;,&,&,&,&G=KeLei1w d$d$d$d$~*~*n&n&~*~*d$w G*x&Pet:n-,&c-c-t&t&,&,&!;';IeU5:$d$d$d$n&n&d$d$~*~*~*~*d$d$w D$Ue[4Ye};t&t&,&,&,&,&,&,&,&,&,&,&,&,&,&,&C&TeRe4*D$EeWe. . Qe    . .                       ",
"            !e~ew 51^eq>n&/e                (eY:)e_e`e'e]e[eXwZ={e}e,$w d$d$D%d$d$d$d$w>|e r.rXrB0orOrc-,&,&,&,&,&X>d*27+rw d$d$d$d$~*~*d$d$~*~*d$w *&5*@r#rC&,&c-c-t&t&,&,&,&F=Qw$rh6w d$d$n&n&d$d$%r&r*r~*d$d$w &&=r-rT9};t&t&,&,&,&,&,&,&,&,&,&,&,&,&,&X>d*P;;r 3:rtX  . . .     . .                       ",
"          ; 73>rd$d$e>e>n&,r<r1r    0 0   -$2rU:3r4r5r6r7rR0458rb>9rx&<$$*d$w w d$d$n&I:0rqrwrerrrtrv,!,[*,&,&,&,&A;L2yr,$d$w w d$d$d$d$d$d$d$d$d$1$@,urirc=,&,&,&,&,&,&t&t&,&L%I;prar3%n&n&d$d$d$d$srdrr>d$<:w d$>$frgrs2,&,&,&c-c-,&,&,&,&,&,&c-c-c-c-t&fehrjrz&krlr              o o                       ",
"          )Xzrn&e>Y:&1>2Y1*,Y:xrcr        vrw>brnrJwmrMrNrr2BrX9<;M*Vr,$3%d$w w d$n&q>CrZrArp9SrY3DrFrt&,&,&[*,&,&G=GrHr/;w d$w d$d$d$d$w w D%d$d$1$|4JrW&0-k;,&,&,&,&,&t&t&,&,&c=19Kr<$*&n&d$D%d$d$w w d$d$w w d$>$Lr=8r&C&,&,&c-c-,&,&,&,&,&,&c-c-c>7%,<PrIrZ*05<rU               o o                       ",
"          Urw yeU:YrTrRrErWrQrU:!r      ~r3q*,^r/r(r)rXr_r`rI=<;C&q:'r15:$d$d$d$d$w>0>]r[r{rY:3%&&}r36c-,&,&,&,&,&X>|ro7S&G*w d$D%d$d$d$d$d$d$d$d$w w >$Kq to,O*,&,&,&,&,&,&,&,&K%.tXt3%n&d$d$d$d$d$d$d$d$d$~*~*d$:$(4ot(908C&[*c-c-,&,&,&,&t&t&,&,&x>q:Ot+ti1@t#to                         o o               ",
"        AO$tq>Y1%t&t*t=t-t;t:t>tI:,to . <tY:'91t2t3t4tae5t6t{2O*t&>67t,0Y$d$d$d$d$Y:8t9t0ttew>w 3%qtwtetn-,&,&,&,&L%<&rtttyt3%d$d$d$d$d$d$d$d$d$d$d$d$3%0*utM*O*,&,&,&,&,&,&,&K%itpt,4*&w d$d$d$d$d$d$d$d$d$~*d$d$3%,$i831e,L%,&c-c-,&,&,&,&t&t&c=k;$-atstg2&&O+o o                         o o               ",
"        dtq>ftgthtjtktltztktxtctvtbtnt++mtU:MtNtBtVtCtZtAtn3<;,&,&A;1;StY,n&d$d$n&U:DtFtGtq>e>d$w s9Htt97%,&,&,&,&C&K%O,JtKtY$n&d$d$d$d$d$d$d$d$d$d$d$*&:$Lt|%n-,&,&,&,&,&,&,&7%PtIt0*w d$d$d$d$d$d$d$d$d$d$D%d$d$w Ut'6YtTt'%,&,&,&,&,&,&,&,&,&x>L*RtEtrrWtQt1r. .                                           ",
"        !tU:~t^t/t(t)tS,S,S,S,_t`t't]t[tn&{t}t|t y.yY:k=Xyt17%,&,&K%oyOyX7*&w n&w>+y@y#y$ye>n&d$~*,$%ym5X>,&,&[*,&[*t&G=&y*y,:=yS&d$d$D%d$d$d$d$d$d$d$3%1$e:-y7;K%,&,&,&,&,&,&7%(5;y05]1w d$d$d$d$D%d$d$d$d$d$d$*&d$:y>y,y<y1y,&,&,&,&,&,&,&C&G=8=2yA:rr3y4y    . .     X                                     ",
"        +5Y15y6y7yS,S,S,S,S,(tC,8y43w>d$n&9y0yqywyI:e>F%eyrytyO*,&,&O:|%yy:$*&e>I:uyiypyI:n&d$d$w ,$ayPtX8};,&,&,&,&,&K%A;Hqsydy+>d$d$~*d$d$d$d$d$d$d$d$w z&fygy7%,&,&,&,&,&,&K%g=^>hyjy1$w d$d$w w d$d$d$d$d$d$n&d$~*u*kylyq:t&,&,&,&,&C&C&L%!<zyxy,$w6cyXo                                                  ",
"      ; j&Y1vyby7yS,S,S,S,*<&<nymyY1Y:q>I:MyNyByI:e>n&:$k$Vyp&z:8%c-L%W>Cy&&$*w>ZyAySy'9q>d$d$d$d$m>Dy=2{*};,&,&,&,&c=t&u&<&Fy!5F%d$d$~*d$d$d$d$d$d$d$GyHy^-JyY<A;,&,&c=,&,&,&(>KyLyPy/;*&d$d$d$w w d$d$d$d$d$d$n&n&d$<$6=IyUyC&,&,&,&C&7%r&I=YyTyY$RyEy2o                                                    ",
"        N4U:WyQy!y(tS,S,~y(t^y/y(yY1*,Ze)y_y`y0>I:q>e>K-&&J3'y&-]y8%[y{y}y<$w |y u.uXu0>w>d$d$d$w ~89rouK%,&,&,&,&,&,&,&t&F4Our;&&d$d$d$d$d$d$d$d$d$n&+uEe@u[&J1G=t&,&,&t&t&Q<#u$u),0**&mtd$zr%ud$d$d$d$d$d$d$d$d$*&d$<$$3&uiq.-08[*,&L%85M-*ur;&&=u-u          . .                                           ",
"        _.;u:u>u=<,uztzt7y,u!y<u1uY12u3u4u5u6u7u8u9u0u*,ye>$,:quwueurutuyuY>'tI:CquuiuY:e>d$d$w *&),puH;C&,&,&,&[*c=,&,&t&$>ausu&&d$d$d$d$d$d$d$d$d$n&n&1$y=dufuI;Q<,&,&t&t&t&I-guhu02:$*&d$o+jud$d$d$d$d$d$d$d$d$d$D%kuluzu2&xu9%C&z:Y6cu38|*<$vu_.            . .                                           ",
"    o o   buI:numuMuNuBuVuCuZuAuSuY1DuFuGuHuJuKuLuPuZ<Iu*,G*&&+>UuYuTul3RuEuWuO1U:q>w>e>n&d$d$d$w Qu!uJ%K%c=,&,&,&,&C&,&t&a3t*~uw6d$d$d$d$d$w w <:w ~*d$w u*4%^u1;t&,&c=,&,&,&K%/u(u)u_u:$d$d$d$d$d$d$d$d$d$d$d$D%d$D%`u02Y$C;'u]u[uGr{uk9,$r;Qto                 o                                           ",
"    o o   }u|uU: i.iXioiOi+i@i#iq>Y1$i%izt(t&<&i*i=i-i;i:iI:e>3%Y,>i,i<i1i2i3i4iQrY1I:w>n&d$d$d$w 445i:1L%,&,&,&c=,&C&,&t&L*6iE3F%d$d$d$d$d$w w w w ~*~*d$7i8i9i0iM1K%,&,&,&,&,&O*g=qiLqz&*&w d$d$d$d$d$d$d$d$d$d$d$d$d$d$*&&&wi@414eiri.=tiyi                    o                                           ",
"0 0         uiiiY:*,0>Y1Y1U:I:q>e>piaisidiS,*<*<*<S,di>,figiY:K-hijikilizixiC<C,civibi,iK-w d$d$d$z&niPt7%c=,&,&,&,&,&,&y>W*miC;:$d$d$d$d$d$d$d$d$d$d$d$d$MiNiE<78;e`%,&,&,&N*N*,&K%BiVi{-&&*&d$d$d$d$d$n&n&d$d$d$d$d$d$d$w <$CiZiAiSi&&DiZ#    0 0                         o o                               ",
"0 0         X jXFiGiHi2%JiKi)oLin&ByPisidiS,S,S,)tS,(tktQyIiU:q>UiYiTidi*<&i(tS,RiEiWiQi*,w>n&d$d$H<!i8=A;,&,&,&,&,&,&t&y>,5~iO2:$d$d$d$d$d$d$D%d$d$D%d$d$w :$5*^i/iM1,&,&,&N*N*,&c=,&Q-(ik53%d$d$d$d$d$n&n&d$d$d$d$d$d$d$w *&:$)i,$3%_i`i0     0 0                         o o                               ",
"                  X -$hoS*    _X'i0>$i]ilt[iS,S,S,S,S,A,{i}i*,*,|i pktS,S,*<S,S,diA,B<.pXpY1w>d$d$F%opz%`%,&,&,&OpN*,&,&t&>6+p@pY$d$d$d$d$d$d$d$d$d$w w d$<$#p$p%po*O:,&[*,&OpN*,&,&t&*4&p*p<$d$d$d$d$d$d$d$d$d$d$d$d$d$d$d$d$*&3%|8=p_X                                                                      ",
"                                -p*,;p:p>pS,S,S,S,)tS,lt,p<p1p2p3p4pztS,S,S,S,S,S,S,(tZ,5p6p*,n&d$.=7p+:>6,&,&c=N*o:,&,&,&<;l78p0*w d$d$D%d$d$d$d$d$w w d$:$9;9pM-I;L%[*,&,&N*N*,&,&t&]30p^<z&Y*w d$d$d$d$d$d$d$d$d$d$d$d$d$D%d$DOFO                                                                          ",
"                    X           qpI:wpeprp*<S,S,S,S,S,tpNuypMyteup4pztS,ipipS,S,S,S,S,ltbyppapw>n&>$ 6e&r&,&,&[*,&,&c-c-,&K%spdpt=<$w d$d$d$d$d$d$d$d$d$n&*&:$fpgp/4%=t&,&,&,&,&N*N*,&hpjpkplpzp<$w D%d$d$d$~*~*d$d$d$d$d$d$d$!OjO                                                                            ",
"                                2oxpO1cpvp,udi*<*<bp*<,u/ynp*,*,mp/y,uS,%<ipS,S,S,S,S,S,[iMpNpU:w>&&Bp<<]:,&,&,&,&,&U;,&,&,&U;VpCp,$3%d$d$d$d$d$d$d$d$d$n&n&n&:$|*J9O7O:C&,&c=,&,&N*,&k;j;qiZpAp>$1$d$d$d$d$~*d$d$d$0,d$d$d$!tjX                                                                              ",
"                            X     Spq>DpFpGpHp&<&<&<&<!yJpKpLpPpIpUpYp(tS,S,S,S,S,S,S,S,S,TpRpEpY:&&V1Wp]:O*,&,&C&C&c=,&,&N*,&n3Qps3&&d$d$d$d$d$d$d$d$d$d$d$d$*&<$02!p~pf-,&c-,&,&,&,&C&L%W*Ie^p/p5*w D%d$d$d$d$(p)p_pD-P$u.    X                                                                             ",
"                                  X `p!0'p]p[p{pEi}pN<|p a.aXaoaY1Oa+a@adiS,S,S,S,)tS,S,S,rp#a$aI:F%#*%aF=k,,&,&C&C&,&,&N*N*};&a*a=ak=&&*&d$d$d$d$d$d$d$d$d$d$d$~*F%-aR5`%,&c>c-,&c=,&c=C&M7;a:a>a,aw d$d$T4<a1agOo o o   X                                                                                   ",
"                                    o 2aY:Y13a4a5a6a7a8a*,9a]<]<0a0>qawaea*<S,S,)tS,S,S,S,ktratayajyuaFrM1,&,&,&c>c-,&,&c=,&,&iaI-#2paR*&&d$D%d$d$d$~*~*d$d$d$d$d$:$d8aaf>t&,&,&,&,&t&C&(>&-sada&&1$d$FofaFOho          X                                                                                     ",
"                                    o >o@OgayeI:*,Y1Y1I:haja    73kalazaxacaztS,S,S,S,S,S,,uJuva@ebanaw;L%,&,&,&c-c>,&,&,&,&,&,&t&`%qimaF%d$d$d$d$d$~*~*d$d$d$D%d$3%,$MaQ7E&L%,&K%A;2-X9.tNaar,$BaVa/ojO                . .                 X                                                                 ",
"                                        0 C#CaZaAaSaDaFaGa      0 HaXwCqJaKaLa(tG,*<S,S,*<A,>,PaIaUa14Ya,&t&,&,&c=,&,&,&,&,&,&,&,&G=!<TaF%~*d$d$d$d$d$d$d$d$d$d$d$w 3%,$RaEaC-,&n5F1WaQaZ:0*k$!a~a          0 0                                                                                               ",
"                                        0 0     5X5X            0 0 Xq^a9>/a(a:p)aktA,A,A,_a`a'a;<]a[a{af6U7{2`%<;7%L%08K%K%L%L%7%>6!<}a,$d$d$d$d$d$d$d$d$d$d$d$d$d$d$<$|*|a(0W> s.sA3S&&&Xsos              0 0                                                                                               ",
"                                o o       X                           Os+s*,@s#s$s%s&s*s=s-s;s:s>s&&Qu,s<s1s2sp&3s/>~peq4s5soyX-!61;Or6s4%d$d$d$d$d$d$d$d$d$d$d$~*~*d$w <$F%7s8su7,$Y$9s0so       o                                                                                                           ",
"                                o o                                     S*qswsY1esrstsysusispsasssds==>$5* *fsk7gshsjskslszs.;y9xscsvsbsnsd$d$d$d$d$d$d$d$d$d$d$d$d$d$d$ZOms3%]1MsNsBsVs        o o                                                                                                           ",
"                                . 9     0 0 o o                           o CsZsAsU:Y1Y1Y1U:SsDso Z#Fs_#<$&&Y$F%Y,,$0*i1GsHsJsc4,$,$,$&&*&d$d$d$D%d$d$d$d$d$d$d$d$KsLsPs@XIsUsYsA.                                                                                                                            ",
"                                . .     0 0 o o   X X                           AO^OV5zOTsRs          X lO)oEsWsl<Qs2%!s~s^s$*/s(s)s_ss:Ji(&`s's0,d$d$D%]sZw[s{s}sA.        0 0                                                                                                                               ",
"                                                      X                             . .   X     . .           X   @XA#g:|s d<oZo2ojXpoCOS*    S*^8.d8XT.U                     X         X                   X                                                                                                 ",
"                                                                      X             . .         .                   0 0                                 X   X                           X                     X                                                                                               ",
". .                     0 0                                 . .                                       0         o o         0 0                                                                 o o         o o                         = 0             0 0                           X                       ",
". .   X                                                     . .                                               lOXdXdlOlOlO                                                                  hoXdXdXdlO+X    o o     X                   0 0                                             X               X     ",
"odOd+d+d+d+d+d@d+d+d@d+d+do                             #d$d+d+d+d+d+d+d+d+d+d+df7              o o 18%d+d&d&d&d&d&d&d&d&d&d&d+d%d*d                                            o ~1=d-d;d&d&d&d&d:d&d&d>d,d<dOd1do           X             . 2d+d+d+d+d+d+d+d+d+d+d+d+d+d+d+d+d+d+d+d+d3d=d1do               ",
"o 4d&d&d&d&d&d&d&d&d5d&d5d6d                      X     7d8d&d&d>d&d&d&d&d&d&d9d                0d(,&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d+5OO                                      lOBOqd&d&d&d&d>d&d:d:d&d&d&d&d&d&d&d+dlO                      . wd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&d&d&d&d&d9dOO            ",
"    ;d&d&d>d&d&d>d&d&d&d&d%d                            ed&d&d&d&d&drdrd&d&d&d=d            td9d&d&dydyd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&dudid                      X o o o ~1BO8d5d&d&d&d&d5d&d&d&d&d&d&d>d&d&d&d>d&d&d<df7                  . wd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&d&d&d&d+df7        ",
"X   %d&d&d&d&d&d&d&d&d&d&d;d                          f7&d&d&d&d&d>drdrd&d&d&dpd          18,d&d>d&dydyd&d5d&d&d&d&d&d&d&d&d&d&d>d5d&d&d&d,dho                      o o 18ad8d8d&d&d&d&d&d&d&d&d&d&d&d&d>d&d5d&d&d&d&d&dWXjO                . wd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5dWXjO      ",
"    sdyd&d&d&d&d&d&d&d&d&d&d+X                        OO&d5d&d&d>d&d&d&d&d&dOX          id,d&d:drdrd5d&d&d&d&d&d&d&d&d&d>d&d&d&d&d&d&d&d&d&d9do                   X o 18dd:d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d9dfd. X       X   . gd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&d>d5d&d<d      ",
"    . hd&d&d&d&d&d&d&d&d&d&dD*                        OX&d&d&d&d&d&d&d&d&d&dy5          ed&d:djdkdrd&d&d&d&d&d&d&d&d&d5d&d&d&d&d&d&d&d&d&d&d&d3d                    18adjd:d&d&d5d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&dwd.             . gd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&dlO    ",
"      OO5d&d&d&d&d&d&d&d&d&dhd.                     o ,d&d&d&d&d&d&d&d&d&d,d  0       EO&d&d&d&drdrd&d&d>d&d&d<d3d3dldEs&d&d&d&d&d&d&d&d&d&d&d,d                  f79d&d&d&d&d>d&d>d&d&d&d&d&d&d&d&d>d5d&d>d&d&d&d&d5d&d&d&dWszd            . wd&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&d&d&d&d&d:d:d&d&d&d&d&d&dxdo   ",
"      f7&d&d&d&d&d&d&d&d&d&dydsd      X             4d&d&d&d&d&d&d&d&d&d&dcd  0       )o&d&d&d&drdvd&d&d&d,d*do o od. . bd&d5d&d>d&d&d5d&d&d&d&dy5              X A%&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&d&d5d&d5dydndf7X         . wd&d&d&d&d&d&d&d&d&d&d+d3d3d3dmded,d&d>d&d:d:d&d&d&d&d&d&dqd~1  ",
"        ed>d&d&d&d&d>d&d&d&dydMd                    -d&d&d&d:d:d&d&d&d&d8d18        . Nd&d&d&d&d&d&d&d&d8dBd              A%&d&dVdVd&d&d5d&dydydBOo     0 0     id,d&d&d&d5d&d&d&d&d&d&d&d5dWXD*XdXdy5)o,d&d&d&d&d&d&d&d&d&drd&dCdo     X   . Zd&d&d&d&d&d&d&d&d&d&dAd.     . 9 f7-p&d&d5d&d&d&d&d&d&d&d&d6d  ",
"        4d&d&d&d&d&d&d&d&d&dydSd                    ;d5d>d&djdjd&d>d&d&dDdo         . Ws5d&d&d&d&d&d&d&d8dXd  0           Zo,d>dVdVd&d&d&d&dydyd6-o     0 0     3d&d&d&d&d&d&d&d&d5d&d&d,d6d    o o     idFd&d&d>d&d>d&d&d&drd&d(,o         . wd&d&d&d&d&d&d&d&d&d&dAd.     . .   f7,d&d&d&d&d&d&d&d&d&d&dOd  ",
"        o ad&d&d&d&d&d&d&d&d&d&df7              o 18&d&d&d&d&d&d&d&d&d&dD*          . yd&d&d&d&d&d&d&d&d&dxd                -d&d8d8dydydGd.owdwd-p              ;d&d&d&d&d&d5d&d&d&d&d,d+X                  Fd&d&d&d&d&d&d&d&d&d8d4w- o     . wd&d&d&d&d&d&dydyd&d&dAd.   X         -d&d5d&d&d&d&d>d&d&d&d3d  ",
"        o cd&d&d&d&d&d&d&d&d&d&dy5              o cd&d&d&d&d&d&d&d&d&d&dho          . yd&d&d&d&d&d&d>d&d&d&d+5OOho          sd6d#do . .   X . .               +X&d&d>d&d&d&d&d&d&d&d&d=d                    id,d&d&d&d&d&d&d+d3dHd_&o o     . Zd&d&d&d&d&d&dydyd&d&dAd.             3d&d&d&d&d&d&d&d&d&d&d3d  ",
"          +X&d5d&d&d&d&d&d&d>d&dBOo     X     X o 6-&drd&d&d&d&d&d&d&d<d. .         . wd&d&d8d8d:d:d&d&d&d&d&d&d&d;d-dOd18                X . .   0         . zd&d&d&d&d&d&d&d5d&d5dEs. . .                 o Cd8d(,Jdbd+X                  . wd&d&d&d&d&d&d&d&d&d&dAd9   0 X       -d&d&d5d&d&d&d&d&d&d&d3d. ",
"            9d&d&d&d&d&d&d&d&d&d_io             #d&d&drd&d&d&d&d&d&d&d=d. .         . bd&d&d8dqd:dKd&d&d&d&d&d&d:d:d&d&d8dad~OOOjO          .     0         . Jd&d&d&d&d&d&d&d&d&d5d2d. . .                 o _&~1o . .                     . wd&d&d&d&d&d&d&d&d&d&dAd. X 0       f7,d>d&d&d&d5d&d&d>d&d&d4d9 ",
"            Ld&d&d&d&d&d>d&d&d&d&d6d            Pd&d&d&d5d&d&d5d&d&dnd.               EOId5d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d>d&d&d<d=do                     . gd&d&d&d&d&d&d&d&d&d&dK+      o                       X                       . wd&d&d&d&d&d&d&d&d&d&d3do o o . . #d6-&drd&d&d&d&drdrd&d&dVd+X  ",
"            id&d5d&d&d&d&d&d&d&d&d%d            9d&d&d&d&d5d&d>d&d&dJd.           X     3d&d&d&d&d&d>d&d&d&d&d&d&d&d&d&d&d>d&d&d&d&d&d,dA%  X               . Es&d&d&d&d&d&d&d&d&d&d+X    X -                             X                 . wd&d&d&d&d&d&d&d&d&d&dUd3dCdCd2dwd8d&d&drd&d&d&d&drdrd&d5d+5    ",
"      X       OX&d&d&d&d&d&d&d&d&d;d          f7&d&d&d&d&d&d&d>d&d&d+X                  o BO&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d>d&d&d&dVd+518o             . yd&d&d&d&d&d&d&d&d&d&d                                                        . wd&d&d&d&d&d&d&d&d&d&d>d&d&d&d&d&d&d&d:dKd&d&d&d&d&d&d&d&dA%    ",
"              y5&d&d5d&d&d&d&d&d&d5dho        !1&d&d&d&d&d&d&d&d&d;d                    o o -d&d>d&d&d5d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&dVdVdqd0d            . yd&d&d&d&d&d&d&d&d&d&d                                                        . wd&d&d&d&d&d&d&d&d>d&d&d&d&d&d&d&d5d&d:d:d&d&d&d5d&d&d&d,df7    ",
"                ,d5d&d&d&d&d&d&d&d&dbd.     . Sd&d&d&d&d&d&d&d&d&d3d. . X           0 = 0 0   y5(,8d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&d&d18o         . yd&d&d&d&d&d&d&d&d&d&d                                                        . wd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d8d0d      ",
"        X       %d&d&d&d&d>d&d>d&d&dhd.     . yd&d&d&d&d&d&d&d&d&d1d. .             0 0 = 0     o 0d;d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d(,o         . yd&d&d&d&d&d&d&d&d&d&d                                                        . wd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d0do       ",
"                18qd&d&d&d&d&d&d&d&d&dpd    4d&d&d&d:d:d&d5d&d&d$do                                   +Xcd(,8d8d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d=d        . yd&d&d&d&d&d&d&d&d&d&d                                                        . wd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d_i0dX         ",
"              X o 6-&d&d&d&d&d>d&d&d&d=d    -d&d&d5d:d:d&d&d&d&d0do                                     o o 187dYd;d&d&d&d5d>d&d&d5d5d&d&d&d&d&d&d9d        . wd&d&d&d&d&d&d&d&d&d&dlO                          OOf7          X             . wd&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d5d&d&d&d&d&d;d3d_&o           ",
"                  M>&d&d&d&d&d&d&d&d&d<d    ,d&d&d>d:d:d&d&d&d,df7                                                  poD*6-8d&d&d&d&d&d&d&d&d:d:d&d&d        . wd&d&d&d5d&d&d&d&d&d&dy5                        lO&d5d$d7d#do                 . wd&d&d&d&d&d&d&d&d&d&dEswd$d$dwdgd$d$dwdAd7d18. .               ",
"                  jO&d&d&d&d&d&d&d&d&d&d  lO&d&d&d&d:d:d&d&d&d-d                                    +XlOf7  X           o Xd,d&d&d&d&d&d&d&d:d:d&d&dr+      . Ad&d&d&d&d&d5d&d&d&d&dA%  X                     )o&d&d8d8d8d6-)o+X            . wd&d&d&d&d&d&d&d&d&d&dAd. o o . . o o . . o o . .               ",
"                  X <d&d&d&d&d&d&d&d&d&d4d%d&d&d5d&d&d&d&d&dydTd  0               EO-d+d+d+dEsyd&d&d&d&d0do X               *d,d&d&d&d&d&d&d&d&d&d&dr+        Td&drd5d&d&d>d&d&d5d&d9do                     id,d&d&d&d&d&d&d&d5dGdA%        . wd&d&d&d&d&d&d&d&d&d&dAd.                                       ",
"                    =d&d&d&d&d&d&d&d&d&d-d;d&d&d&d&d&d&d&d&dEs    0               ho&d5d&d&dWsyd&d&d&d5dBOo   X             o Fd&d&d&d&d&d&d&d&d&d&dlO        jO&drd&d&d&d&d&d&d5d>d&dRd              X     3d&d&d&d&d&d&d&d&d5dVdD*        . wd&d&d&d&d&d&d&d&d5d&dAd.                   X                   ",
"                      Gd&d&d&d&d&d&d&d&d,d&d&d&d&d&d&d>d&d&d)oX                     ,d&d&d&d5d&dydyd&d&d,do         0 0     . Ad&d&d&d&d&d&d&d&d&d&dho          <d&d>d&d&d&d&d&d&d&d5d;dido         o o o *d&d&d5d&d5d&d&d&d&d&dVd+X        . wd&d&d&d&d&d&d&d&d&d&dAd.     X                                 ",
"                      ~O&d&d&d&d&d&d&d&d&d&d&d&d5d&d5d&d&d5dho                      Yd&d&d&d&d&dydyd&d&d&d3d        0 0     . Zd&d&d&d&d&d&d&d&d&d,d            6d&d&d&d5d&d>d&d5d&d&d&d;d6dX       o o =d,d&d&d&d&d&d&d&d&d&d&dWX      X   . Zd&d&d&d&d&d&d&d&d&d5dAd.                                       ",
"                      +X&d&d&d&d&d&d&d&d>d&d&d&d&d&d&d&d&dud                      X =d&d&d&d&d&d&d>d5d&d&d&d0do         o o =d&d&d&d&d&d&d&d&d&drd-d        X   o $d&d&d&d&d&d&d&d&d&d&d&d&d;d-d3d3d-d;d&d&d&d&d&d&d&d&d&d&d&d5dOO          . wd&d&d&d&d&d&d&d&d&d&dAd.                                       ",
"                        ;d&d&d>d&d&d&d&d&d&d&d&d&d&d&d&d&d=d                        id,d&d&d5d&d5d&d&d&d&d&d8dxdy5f7    XdBO&d&d&d&d&d&d&d&d&d&d&d6d            o 18&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d>d>d&d&d&d&d&d;d            . wd&d&d&d&d&d&d&d&d&d5dAd.     X                                 ",
"                        Od&d:d:d&d&d&d&d&d&d&d&d:d:d&d&d8d_&                        o Cd&d&d&d&d&d&d&d5d&d&d&d5d&d&d&d5d&d&d&d&d&d&d&d&d&d&d&d&dSd                  3d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d6d          X . wd&d&d&d&d&d&d&d&d:d&dEd.                                       ",
"                        1d&d:d:d&d&d&d&d&d&d&d&d:d:d&d&dxdo                         o o 9d&d&d&d&d5d&d&d5d&d&d&d&d&d&d&d>d&d&d5d&d&d&d>d&d&d>d,dho                  o +d&d>d&d&d&d&d&d&d&d5d&d&d&d&d&d&d>d&d&d&d&d&d&d&d&d&d%do             . wd&d&d&d&d&d&d&d&d:djdAd.                                       ",
"                  X     o <d&d&d&d&d&d&d&d&drdrd&d5d&d&dy5                          o o *d,d&d&d&d&d&d&d5d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d8d18              X       f79d&d5d&d&d&d&d&d>d&d&d5d&d&d&d&d&d&d&d&d&d&d&d&d&d@do o             . wd&d&d&d&d&d&d&d&d:d:dAd.                                       ",
"                        o =d&d&d&d&d&d&d&d&drdrd&d&d&d,d                            o o o Wd,d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d>d&d&d&d&d,dXdo           X       X X   id<d5d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d&d-dido o             . wd&d&d&d&d&d&d&d&d:d&dAd.                                       ",
"                        . . ,d&d&d&d&d&d&d&d&d&d&d>d&d%d                                    +XWX&d&d&d>d&d&d&d&d>d&d&d&d&d&d&d&dVd%:Vd%:.oho                                D*Gd&d&d&d&d>d&d&d&d&d&d&d&d&d&d&d&dQdydGdD*                    . wd&d&d&d&d&d&d&d&d&d&dAd.                                       ",
"                        . . !d&d&d&d&d&d&d&d&d&d&d&d&d*d                                        =d+d&d&d&d&d&d&d&d&d&d&d&d5d&d&dVdVdOXlO  X X         X X                     f73d>%&d&d&d&d&d&d&d&d>d&d&d&d5d&dnd2dho                      . wd&d&d&d&d&d&d&d&d&d&dAd.                                       ",
"                            sdAdCdCdA%A%CdCdAdAdCdCdD*                                              ~dTdCd$dwd^d8d8dydyd8d6-.o)oy5jO                                                +XD*-d@dEsWs&d&d&d&d6-$dA%y5                    X         OOCdCd3d3d3d3d3d3d3d3dlO                                        ",
"                            . . o o     o o . . o o                                                 . . o o . . o o . . o o                                       X                     odo . . o o o o o o X                               X   o o o o o o o o o o                                           ",
"                                                                                                                                                                                                                                                                o o                                           ",
"                                                                                                                                                                                                                                                                o o                                           ",
"                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                              ",
"                                                                0 0                                                                                                                                                             . . . .                                                                       ",
"                                                                0 0                                                                                                                                                             . . . .                                                                       ",
"0 0         . .     . .                     o o                     . .             .         .                           X             o o . .     o o               X                             . . o o     0     . o o X                       . .     . .                                   X           ",
"0 0       f7yd^d    2dydOO                  o o               +X+5VdydhdjO)&VdZX    . 9     . .               -pVd      X             +X$d8dyd/d+X  o o   X               X D*OX                    . Ad8dXd      A%ydyd8d(,<+                      bdSd    . .                 X         X   Vd.o            ",
"    X       -d&dHd- Esndf7jO4d=d#do 1d(d180dEOlOsd. 6d*d    . Sd&d1d=d+d0dXd3d1d#dXd1d=dWdid=d*d- 186d1dOdpd9 wd8do o 18Od6d        . wd8dCdOOVd.o  id`90d#d  f7Xd#d4d)do 18&d9d#d#d6d*dBdo 1d=dy5f7. Ad&d6d.   o Cd&dOd3d&dxd~1Xd180d~1_&Hd=d1do 18&d9dA.o 1d=dXq~1    187d4did  X *dOdXdo . yd$do           ",
"          X )d&d_d18ydJdjODd>%`d8dHd3d&d8d(,hoVdJd~d&d!d    . Ad&d&d9d3d~1Cd&d6dCd8d,d&d&d,d&d&d#d$d>d,d&d;d. wdNso Bd8d+d,d'd      . Wsado   f7  ~19ddd(,8dy5lO8dad&d&d7dc<&d&dCdCd&d&d(,18Id;dGdGdsd3d&d6d. . o Cd&dOd%d&dBOXd8d8dqd186-]d;d5dHd$d&d&dCd18,d;dadadpoOO8d(,,dud  OO&d9d8d6-. yd$do           ",
"            . Es(,7d&d6dOd&d<d3d5d+d3d&dCdo   .o;d=d&d*d        HdBO,d>d%d3d&d6d3d&d4d%d8dXq%d&dXd$dyd~d[d&d6d$d8do GdGd3d+d&d6d    . yd(,o o 18o 0d&d=d~18d+d6d&d%dRd&dCdo &dUdo Cd&d3do BO&d1dHd8d3d3d8dXd    o Cd&d&d8dxdholO&d+d  OO8d0d~dyd$do ydgdo BO&d1dHd8d3d_i(,o *d6d~1(,;dod{d:d6d&d$do X   X     ",
"            . 2d8dad;do =d&d<d3d3d=d3d5dXdo   y5&d9d;do       ~O8d~16d&d<d3d&dRd3d&d6d3d8dXd3d&d}d$dWssd[d&dXd$d8do +5Gd3d3d3d1d    . Es8dXd18ad(,Bd5d=d~1qd<d6d&d3d6d&dCdo &d+do Cd5d6do BO&d1dHd8dOd3d8dXd    o Cd5d6do o   lO&d3d  OO8d0d~dydxdo ydwdo BO&d1dHd8dOdad(,o 6d|d~1(,;do {d:d*d&d$do         X ",
"              ho8d8dA%  f7WX,d9d8d0dCd8dlO  0   ;d&dD*        OO8d8d&d,dXdCd8dXdCd8dXdCd8dXd3d&dXd$d&d&d&d9d  .o8do 0d8d fad'df7      lOadqdydWsOOf79d&d(,adlOlO8dCdXd8dCdo ,d&dCdCd8dXdo 18ad_iad(,f7)&8dXd  X   )&8d}d      lO8dCdo ~16-8d;d,dlO  ,d&d.f18,d,dad(,jO!18d(,&d9djOOO5d;dqdxd  Vd$do           ",
"                XdXdf7    Zo6d6d#do #dXdf7  Xfho$d&dho          #dXd6d1do #dXd~1#dof~1#dXd~1td6d~1$d8d1d6did  +XXdo o 18XdXd            ~1XdOfsd    o 6dXd#d  f7Xd#d~1XdA.o +f6d18#d}d~1o o ~1XdXd~1  hoXd~1      hoXd~1      f7Xd#do o o Xd6d1d    1d6d18o id6dXd~1    18Xd6do     1d6dXdo   lO18o           ",
"                                          X <+Vd8dcd                                              .oVd                                                                                                                                                                                                        ",
"                                                  -                                                 0 0                                                                                                                                                                                                       ",
"                                                    o o   X                                     o o                                         -%-%                                                                                0 0         0 0                                                               ",
"                                        X           o o                                         o o                                         -%-%                                                                                0 0         0 0                                                               ",
"                                                    o o                                           X       X                                     0 0                                                                                                                                                           ",
"                                                    o o                                                                                         0 0                                                                                                                                                           ",
"                                        0 0         . .                                                                                                                                                                                                                                         o o           ",
"                                        0 0         . 9                                           X                                                                                                                                                                                             o o           ",
"                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                              ",
"                                                                                                                                                                                                                                                                                                              "
};

////@end XPM images


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DeviceBootloaderwizard type definition
//

IMPLEMENT_DYNAMIC_CLASS( DeviceBootloaderwizard, wxWizard )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DeviceBootloaderwizard event table definition
//

BEGIN_EVENT_TABLE( DeviceBootloaderwizard, wxWizard )

////@begin DeviceBootloaderwizard event table entries
////@end DeviceBootloaderwizard event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DeviceBootloaderwizard constructors
//

DeviceBootloaderwizard::DeviceBootloaderwizard()
{
    Init();
}

DeviceBootloaderwizard::DeviceBootloaderwizard( wxWindow* parent, wxWindowID id, const wxPoint& pos )
{
    Init();
    Create(parent, id, pos);
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DeviceBootloaderwizard creator
//

bool DeviceBootloaderwizard::Create( wxWindow* parent, wxWindowID id, const wxPoint& pos )
{
    ////@begin DeviceBootloaderwizard creation
  SetExtraStyle(wxWS_EX_BLOCK_EVENTS|wxWIZARD_EX_HELPBUTTON);
  wxBitmap wizardBitmap(GetBitmapResource(wxT("../../../docs/vscp/logo/vscp_logo.jpg")));
  wxWizard::Create( parent, id, _("VSCP  Bootloader Wizard"), wizardBitmap, pos, wxDEFAULT_DIALOG_STYLE|wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX );

  CreateControls();
    ////@end DeviceBootloaderwizard creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// DeviceBootloaderwizard destructor
//

DeviceBootloaderwizard::~DeviceBootloaderwizard()
{
    ////@begin DeviceBootloaderwizard destruction
    ////@end DeviceBootloaderwizard destruction

    if ( NULL != m_pBootCtrl ) {
        delete m_pBootCtrl;
    }

}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void DeviceBootloaderwizard::Init()
{
    ////@begin DeviceBootloaderwizard member initialisation
  m_pgSelecInterface = NULL;
  m_pgSelecDeviceId = NULL;
  m_pgSelecAlgorithm = NULL;
  m_pgLoadFile = NULL;
    ////@end DeviceBootloaderwizard member initialisation
    
    m_bInterfaceSelected = false; // No interface selected
    m_bMDFLoaded = false;         // No MDF loaded
    m_bHexFileLoaded = false;     // No firmware file loaded yet

    // Default boot device is VSCP
    m_pBootCtrl = new CBootDevice_VSCP( &m_csw, m_guid ); 

}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for DeviceBootloaderwizard
//

void DeviceBootloaderwizard::CreateControls()
{    
    ////@begin DeviceBootloaderwizard content construction
  DeviceBootloaderwizard* itemWizard1 = this;

  WizardPage* itemWizardPageSimple2 = new WizardPage;
  itemWizardPageSimple2->Create( itemWizard1 );
  itemWizard1->GetPageAreaSizer()->Add(itemWizardPageSimple2);

  m_pgSelecInterface = new WizardPage1;
  m_pgSelecInterface->Create( itemWizard1 );
  itemWizard1->GetPageAreaSizer()->Add(m_pgSelecInterface);

  m_pgSelecDeviceId = new WizardPage6;
  m_pgSelecDeviceId->Create( itemWizard1 );
  itemWizard1->GetPageAreaSizer()->Add(m_pgSelecDeviceId);

  m_pgSelecAlgorithm = new WizardPage3;
  m_pgSelecAlgorithm->Create( itemWizard1 );
  itemWizard1->GetPageAreaSizer()->Add(m_pgSelecAlgorithm);

  m_pgLoadFile = new WizardPage2;
  m_pgLoadFile->Create( itemWizard1 );
  itemWizard1->GetPageAreaSizer()->Add(m_pgLoadFile);

  WizardPage5* itemWizardPageSimple40 = new WizardPage5;
  itemWizardPageSimple40->Create( itemWizard1 );
  itemWizard1->GetPageAreaSizer()->Add(itemWizardPageSimple40);

  WizardPage7* itemWizardPageSimple47 = new WizardPage7;
  itemWizardPageSimple47->Create( itemWizard1 );
  itemWizard1->GetPageAreaSizer()->Add(itemWizardPageSimple47);

  wxWizardPageSimple* lastPage = NULL;
  if (lastPage)
    wxWizardPageSimple::Chain(lastPage, itemWizardPageSimple2);
  lastPage = itemWizardPageSimple2;
  if (lastPage)
    wxWizardPageSimple::Chain(lastPage, m_pgSelecInterface);
  lastPage = m_pgSelecInterface;
  if (lastPage)
    wxWizardPageSimple::Chain(lastPage, m_pgSelecDeviceId);
  lastPage = m_pgSelecDeviceId;
  if (lastPage)
    wxWizardPageSimple::Chain(lastPage, m_pgSelecAlgorithm);
  lastPage = m_pgSelecAlgorithm;
  if (lastPage)
    wxWizardPageSimple::Chain(lastPage, m_pgLoadFile);
  lastPage = m_pgLoadFile;
  if (lastPage)
    wxWizardPageSimple::Chain(lastPage, itemWizardPageSimple40);
  lastPage = itemWizardPageSimple40;
  if (lastPage)
    wxWizardPageSimple::Chain(lastPage, itemWizardPageSimple47);
  lastPage = itemWizardPageSimple47;
    ////@end DeviceBootloaderwizard content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Runs the wizard.
//

bool DeviceBootloaderwizard::Run()
{

    //m_bootCtrlPic1.loadIntelHexFile( _("C:\\development\\m2m\\firmware\\pic\\kelvin\\smart\\project\\kelvin_smart2_release_258_reloc.hex") );

    wxWindowList::compatibility_iterator node = GetChildren().GetFirst();
    while (node)
    {
        wxWizardPage* startPage = wxDynamicCast(node->GetData(), wxWizardPage);
        if (startPage) return RunWizard(startPage);
        node = node->GetNext();
    }
    return false;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool DeviceBootloaderwizard::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap DeviceBootloaderwizard::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin DeviceBootloaderwizard bitmap retrieval
  wxUnusedVar(name);
  if (name == _T("../../../docs/vscp/logo/vscp_logo.jpg"))
  {
    wxBitmap bitmap(vscp_logo_xpm);
    return bitmap;
  }
  return wxNullBitmap;
    ////@end DeviceBootloaderwizard bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon DeviceBootloaderwizard::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin DeviceBootloaderwizard icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end DeviceBootloaderwizard icon retrieval
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage type definition
//

IMPLEMENT_DYNAMIC_CLASS( WizardPage, wxWizardPageSimple )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage event table definition
//

BEGIN_EVENT_TABLE( WizardPage, wxWizardPageSimple )

////@begin WizardPage event table entries
////@end WizardPage event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage constructors
//

WizardPage::WizardPage()
{
    Init();
}

WizardPage::WizardPage( wxWizard* parent )
{
    Init();
    Create( parent );
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage creator
//

bool WizardPage::Create( wxWizard* parent )
{
    ////@begin WizardPage creation
  wxBitmap wizardBitmap(wxNullBitmap);
  wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

  CreateControls();
  if (GetSizer())
    GetSizer()->Fit(this);
    ////@end WizardPage creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage destructor
//

WizardPage::~WizardPage()
{
    ////@begin WizardPage destruction
    ////@end WizardPage destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void WizardPage::Init()
{
    ////@begin WizardPage member initialisation
    ////@end WizardPage member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for WizardPage
//

void WizardPage::CreateControls()
{    
    ////@begin WizardPage content construction
  WizardPage* itemWizardPageSimple2 = this;

  wxBoxSizer* itemBoxSizer3 = new wxBoxSizer(wxVERTICAL);
  itemWizardPageSimple2->SetSizer(itemBoxSizer3);

  wxStaticText* itemStaticText4 = new wxStaticText;
  itemStaticText4->Create( itemWizardPageSimple2, wxID_STATIC, _("VSCP Bootloader wizard will now walk you through \nthe steps needed to update the firmware of your \nremote device"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer3->Add(itemStaticText4, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText5 = new wxStaticText;
  itemStaticText5->Create( itemWizardPageSimple2, wxID_STATIC, _("The node you need to update can be located on a VSCP bus \nconnected to a server on a remote location or be connected\nto an interface on your local computer. "), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer3->Add(itemStaticText5, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText6 = new wxStaticText;
  itemStaticText6->Create( itemWizardPageSimple2, wxID_STATIC, _("Please don't turn of the power off the remote node \nuntil the firmware update process is completed."), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer3->Add(itemStaticText6, 0, wxALIGN_LEFT|wxALL, 5);

    ////@end WizardPage content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool WizardPage::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap WizardPage::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin WizardPage bitmap retrieval
  wxUnusedVar(name);
  return wxNullBitmap;
    ////@end WizardPage bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon WizardPage::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin WizardPage icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end WizardPage icon retrieval
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage1 type definition
//

IMPLEMENT_DYNAMIC_CLASS( WizardPage1, wxWizardPageSimple )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage1 event table definition
//

BEGIN_EVENT_TABLE( WizardPage1, wxWizardPageSimple )

////@begin WizardPage1 event table entries
  EVT_WIZARD_PAGE_CHANGING( -1, WizardPage1::OnWizardpageSelectInterfacePageChanging )

  EVT_BUTTON( ID_BUTTON20, WizardPage1::OnButtonSelectInterfaceClick )

////@end WizardPage1 event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage1 constructors
//

WizardPage1::WizardPage1()
{
    Init();
}

WizardPage1::WizardPage1( wxWizard* parent )
{
    Init();
    Create( parent );
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage1 creator
//

bool WizardPage1::Create( wxWizard* parent )
{
    ////@begin WizardPage1 creation
  wxBitmap wizardBitmap(wxNullBitmap);
  wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

  CreateControls();
  if (GetSizer())
    GetSizer()->Fit(this);
    ////@end WizardPage1 creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage1 destructor
//

WizardPage1::~WizardPage1()
{
    ////@begin WizardPage1 destruction
    ////@end WizardPage1 destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void WizardPage1::Init()
{
    ////@begin WizardPage1 member initialisation
  m_labelInterfaceSelected = NULL;
    ////@end WizardPage1 member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for WizardPage1
//

void WizardPage1::CreateControls()
{    
    ////@begin WizardPage1 content construction
  WizardPage1* itemWizardPageSimple7 = this;

  wxBoxSizer* itemBoxSizer8 = new wxBoxSizer(wxVERTICAL);
  itemWizardPageSimple7->SetSizer(itemBoxSizer8);

  wxStaticText* itemStaticText9 = new wxStaticText;
  itemStaticText9->Create( itemWizardPageSimple7, wxID_STATIC, _("Select the interface you want to use "), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer8->Add(itemStaticText9, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText10 = new wxStaticText;
  itemStaticText10->Create( itemWizardPageSimple7, wxID_STATIC, _("If you want to use a remote VSCP server connected \nnode you must  select interface and node on that \nserver as well. "), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer8->Add(itemStaticText10, 0, wxALIGN_LEFT|wxALL, 5);

  itemBoxSizer8->Add(5, 80, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  m_labelInterfaceSelected = new wxStaticText;
  m_labelInterfaceSelected->Create( itemWizardPageSimple7, wxID_STATIC, _("no interface selected"), wxDefaultPosition, wxDefaultSize, 0 );
  m_labelInterfaceSelected->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, false, wxT("Arial Rounded MT Bold")));
  itemBoxSizer8->Add(m_labelInterfaceSelected, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxButton* itemButton13 = new wxButton;
  itemButton13->Create( itemWizardPageSimple7, ID_BUTTON20, _("Select interface"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer8->Add(itemButton13, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    ////@end WizardPage1 content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool WizardPage1::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap WizardPage1::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin WizardPage1 bitmap retrieval
  wxUnusedVar(name);
  return wxNullBitmap;
    ////@end WizardPage1 bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon WizardPage1::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin WizardPage1 icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end WizardPage1 icon retrieval
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage2 type definition
//

IMPLEMENT_DYNAMIC_CLASS( WizardPage2, wxWizardPageSimple )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage2 event table definition
//

BEGIN_EVENT_TABLE( WizardPage2, wxWizardPageSimple )

////@begin WizardPage2 event table entries
  EVT_WIZARD_PAGE_CHANGING( -1, WizardPage2::OnWizardpage3PageChanging )

  EVT_BUTTON( ID_BUTTON_LOAD_FILE, WizardPage2::OnButtonChooseFileClick )

  EVT_BUTTON( ID_BUTTON_LOAD_FILE_FROM_MDF, WizardPage2::OnButtonLoadFileFromMdfClick )

////@end WizardPage2 event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage2 constructors
//

WizardPage2::WizardPage2()
{
    Init();
}

WizardPage2::WizardPage2( wxWizard* parent )
{
    Init();
    Create( parent );
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage2 creator
//

bool WizardPage2::Create( wxWizard* parent )
{
    ////@begin WizardPage2 creation
  wxBitmap wizardBitmap(wxNullBitmap);
  wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

  CreateControls();
  if (GetSizer())
    GetSizer()->Fit(this);
    ////@end WizardPage2 creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage2 destructor
//

WizardPage2::~WizardPage2()
{
    ////@begin WizardPage2 destruction
    ////@end WizardPage2 destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void WizardPage2::Init()
{
    ////@begin WizardPage2 member initialisation
  m_hexFileInfo = NULL;
  m_selectedFile = NULL;
  m_ctrlBtnLoadFile = NULL;
  m_ctrlBtnLoadFileFromMDF = NULL;
    ////@end WizardPage2 member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for WizardPage2
//

void WizardPage2::CreateControls()
{    
    ////@begin WizardPage2 content construction
  WizardPage2* itemWizardPageSimple30 = this;

  wxBoxSizer* itemBoxSizer31 = new wxBoxSizer(wxVERTICAL);
  itemWizardPageSimple30->SetSizer(itemBoxSizer31);

  wxStaticText* itemStaticText32 = new wxStaticText;
  itemStaticText32->Create( itemWizardPageSimple30, wxID_STATIC, _("Select firmware hex file to use "), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer31->Add(itemStaticText32, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText33 = new wxStaticText;
  itemStaticText33->Create( itemWizardPageSimple30, wxID_STATIC, _("File content"), wxDefaultPosition, wxDefaultSize, 0 );
  itemStaticText33->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxBOLD, false, wxT("Tahoma")));
  itemBoxSizer31->Add(itemStaticText33, 0, wxALIGN_LEFT|wxALL, 5);

  m_hexFileInfo = new wxHtmlWindow;
  m_hexFileInfo->Create( itemWizardPageSimple30, ID_HTMLWINDOW4, wxDefaultPosition, wxSize(300, 150), wxHW_SCROLLBAR_AUTO|wxSUNKEN_BORDER|wxHSCROLL|wxVSCROLL );
  itemBoxSizer31->Add(m_hexFileInfo, 0, wxALIGN_LEFT|wxALL, 5);

  itemBoxSizer31->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  m_selectedFile = new wxStaticText;
  m_selectedFile->Create( itemWizardPageSimple30, wxID_STATIC, _("no file selected yet"), wxDefaultPosition, wxSize(250, -1), 0 );
  m_selectedFile->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, false, wxT("Arial Rounded MT Bold")));
  itemBoxSizer31->Add(m_selectedFile, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxBoxSizer* itemBoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
  itemBoxSizer31->Add(itemBoxSizer37, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  m_ctrlBtnLoadFile = new wxButton;
  m_ctrlBtnLoadFile->Create( itemWizardPageSimple30, ID_BUTTON_LOAD_FILE, _("Load local file..."), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer37->Add(m_ctrlBtnLoadFile, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

  m_ctrlBtnLoadFileFromMDF = new wxButton;
  m_ctrlBtnLoadFileFromMDF->Create( itemWizardPageSimple30, ID_BUTTON_LOAD_FILE_FROM_MDF, _("Load remote file from MDF..."), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer37->Add(m_ctrlBtnLoadFileFromMDF, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    ////@end WizardPage2 content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool WizardPage2::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap WizardPage2::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin WizardPage2 bitmap retrieval
  wxUnusedVar(name);
  return wxNullBitmap;
    ////@end WizardPage2 bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon WizardPage2::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin WizardPage2 icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end WizardPage2 icon retrieval
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage3 type definition
//

IMPLEMENT_DYNAMIC_CLASS( WizardPage3, wxWizardPageSimple )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage3 event table definition
//

BEGIN_EVENT_TABLE( WizardPage3, wxWizardPageSimple )

////@begin WizardPage3 event table entries
  EVT_WIZARD_PAGE_CHANGING( -1, WizardPage3::OnWizardpage2PageChanging )

  EVT_CHOICE( ID_CHOICE2, WizardPage3::OnBootLoaderAlgorithmSelected )

  EVT_BUTTON( ID_BUTTON_ALGORITHM_FROM_MDF, WizardPage3::OnButtonAlgorithmFromMdfClick )

////@end WizardPage3 event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage3 constructors
//

WizardPage3::WizardPage3()
{
    Init();
}

WizardPage3::WizardPage3( wxWizard* parent )
{
    Init();
    Create( parent );
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage3 creator
//

bool WizardPage3::Create( wxWizard* parent )
{
    ////@begin WizardPage3 creation
  wxBitmap wizardBitmap(wxNullBitmap);
  wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

  CreateControls();
  if (GetSizer())
    GetSizer()->Fit(this);
    ////@end WizardPage3 creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage3 destructor
//

WizardPage3::~WizardPage3()
{
    ////@begin WizardPage3 destruction
    ////@end WizardPage3 destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void WizardPage3::Init()
{
    ////@begin WizardPage3 member initialisation
  m_nBootAlgorithm = NULL;
    ////@end WizardPage3 member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for WizardPage3
//

void WizardPage3::CreateControls()
{    
    ////@begin WizardPage3 content construction
  WizardPage3* itemWizardPageSimple21 = this;

  wxBoxSizer* itemBoxSizer22 = new wxBoxSizer(wxVERTICAL);
  itemWizardPageSimple21->SetSizer(itemBoxSizer22);

  wxStaticText* itemStaticText23 = new wxStaticText;
  itemStaticText23->Create( itemWizardPageSimple21, wxID_STATIC, _("Select the bootloader algorithm to use "), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer22->Add(itemStaticText23, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText24 = new wxStaticText;
  itemStaticText24->Create( itemWizardPageSimple21, wxID_STATIC, _("If you load bootloader info from the MDF file the algorithm will \nbe set for you."), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer22->Add(itemStaticText24, 0, wxALIGN_LEFT|wxALL, 5);

  itemBoxSizer22->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxStaticText* itemStaticText26 = new wxStaticText;
  itemStaticText26->Create( itemWizardPageSimple21, wxID_STATIC, _("Boot algorithm"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer22->Add(itemStaticText26, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxArrayString m_nBootAlgorithmStrings;
  m_nBootAlgorithmStrings.Add(_("VSCP standard algorithm"));
  m_nBootAlgorithmStrings.Add(_("Microchip pic algorith 1"));
  m_nBootAlgorithm = new wxChoice;
  m_nBootAlgorithm->Create( itemWizardPageSimple21, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, m_nBootAlgorithmStrings, 0 );
  m_nBootAlgorithm->SetStringSelection(_("VSCP standard algorithm"));
  itemBoxSizer22->Add(m_nBootAlgorithm, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  itemBoxSizer22->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxButton* itemButton29 = new wxButton;
  itemButton29->Create( itemWizardPageSimple21, ID_BUTTON_ALGORITHM_FROM_MDF, _("Select algorithm from MDF..."), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer22->Add(itemButton29, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    ////@end WizardPage3 content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool WizardPage3::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap WizardPage3::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin WizardPage3 bitmap retrieval
  wxUnusedVar(name);
  return wxNullBitmap;
    ////@end WizardPage3 bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon WizardPage3::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin WizardPage3 icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end WizardPage3 icon retrieval
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage5 type definition
//

IMPLEMENT_DYNAMIC_CLASS( WizardPage5, wxWizardPageSimple )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage5 event table definition
//

BEGIN_EVENT_TABLE( WizardPage5, wxWizardPageSimple )

////@begin WizardPage5 event table entries
  EVT_WIZARD_PAGE_CHANGING( -1, WizardPage5::OnWizardpagePreBootloadPageChanging )

////@end WizardPage5 event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage5 constructors
//

WizardPage5::WizardPage5()
{
    Init();
}

WizardPage5::WizardPage5( wxWizard* parent )
{
    Init();
    Create( parent );
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage5 creator
//

bool WizardPage5::Create( wxWizard* parent )
{
    ////@begin WizardPage5 creation
  wxBitmap wizardBitmap(wxNullBitmap);
  wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

  CreateControls();
  if (GetSizer())
    GetSizer()->Fit(this);
    ////@end WizardPage5 creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage5 destructor
//

WizardPage5::~WizardPage5()
{
    ////@begin WizardPage5 destruction
    ////@end WizardPage5 destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void WizardPage5::Init()
{
    ////@begin WizardPage5 member initialisation
    ////@end WizardPage5 member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for WizardPage5
//

void WizardPage5::CreateControls()
{    
    ////@begin WizardPage5 content construction
  WizardPage5* itemWizardPageSimple40 = this;

  wxBoxSizer* itemBoxSizer41 = new wxBoxSizer(wxVERTICAL);
  itemWizardPageSimple40->SetSizer(itemBoxSizer41);

  wxStaticText* itemStaticText42 = new wxStaticText;
  itemStaticText42->Create( itemWizardPageSimple40, wxID_STATIC, _("Ready for the bootloader process"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer41->Add(itemStaticText42, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText43 = new wxStaticText;
  itemStaticText43->Create( itemWizardPageSimple40, wxID_STATIC, _("When you click on the next button you will go to the bootloader page\nthat will start loading the firmware file you have selected into the \ndevice of your choice. It is important not to abandon this process \nbefore it has finished.\n\nIf you don't want to continue with the firmware load process \nclick the cancel button."), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer41->Add(itemStaticText43, 0, wxALIGN_LEFT|wxALL, 5);

  itemBoxSizer41->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  itemBoxSizer41->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxStaticText* itemStaticText46 = new wxStaticText;
  itemStaticText46->Create( itemWizardPageSimple40, wxID_STATIC, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer41->Add(itemStaticText46, 0, wxALIGN_LEFT|wxALL, 5);

    ////@end WizardPage5 content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool WizardPage5::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap WizardPage5::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin WizardPage5 bitmap retrieval
  wxUnusedVar(name);
  return wxNullBitmap;
    ////@end WizardPage5 bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon WizardPage5::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin WizardPage5 icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end WizardPage5 icon retrieval
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage6 type definition
//

IMPLEMENT_DYNAMIC_CLASS( WizardPage6, wxWizardPageSimple )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage6 event table definition
//

BEGIN_EVENT_TABLE( WizardPage6, wxWizardPageSimple )

////@begin WizardPage6 event table entries
////@end WizardPage6 event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage6 constructors
//

WizardPage6::WizardPage6()
{
    Init();
}

WizardPage6::WizardPage6( wxWizard* parent )
{
    Init();
    Create( parent );
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage6 creator
//

bool WizardPage6::Create( wxWizard* parent )
{
    ////@begin WizardPage6 creation
  wxBitmap wizardBitmap(wxNullBitmap);
  wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

  CreateControls();
  if (GetSizer())
    GetSizer()->Fit(this);
    ////@end WizardPage6 creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage6 destructor
//

WizardPage6::~WizardPage6()
{
    ////@begin WizardPage6 destruction
    ////@end WizardPage6 destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void WizardPage6::Init()
{
    ////@begin WizardPage6 member initialisation
  m_comboNodeID = NULL;
    ////@end WizardPage6 member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for WizardPage6
//

void WizardPage6::CreateControls()
{    
    ////@begin WizardPage6 content construction
  WizardPage6* itemWizardPageSimple14 = this;

  wxBoxSizer* itemBoxSizer15 = new wxBoxSizer(wxVERTICAL);
  itemWizardPageSimple14->SetSizer(itemBoxSizer15);

  wxStaticText* itemStaticText16 = new wxStaticText;
  itemStaticText16->Create( itemWizardPageSimple14, wxID_STATIC, _("Select device to bootload"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer15->Add(itemStaticText16, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText17 = new wxStaticText;
  itemStaticText17->Create( itemWizardPageSimple14, wxID_STATIC, _("Enter the nickname or the full GUID for the device you want to work with"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer15->Add(itemStaticText17, 0, wxALIGN_LEFT|wxALL, 5);

  itemBoxSizer15->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxArrayString m_comboNodeIDStrings;
  m_comboNodeID = new wxComboBox;
  m_comboNodeID->Create( itemWizardPageSimple14, ID_COMBOBOX_NODEID, wxEmptyString, wxDefaultPosition, wxSize(370, -1), m_comboNodeIDStrings, wxCB_DROPDOWN );
  if (WizardPage6::ShowToolTips())
    m_comboNodeID->SetToolTip(_("Set nickname or GUID for node here"));
  m_comboNodeID->SetBackgroundColour(wxColour(255, 255, 210));
  itemBoxSizer15->Add(m_comboNodeID, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  itemBoxSizer15->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

    ////@end WizardPage6 content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool WizardPage6::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap WizardPage6::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin WizardPage6 bitmap retrieval
  wxUnusedVar(name);
  return wxNullBitmap;
    ////@end WizardPage6 bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon WizardPage6::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin WizardPage6 icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end WizardPage6 icon retrieval
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage7 type definition
//

IMPLEMENT_DYNAMIC_CLASS( WizardPage7, wxWizardPageSimple )


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage7 event table definition
//

BEGIN_EVENT_TABLE( WizardPage7, wxWizardPageSimple )

////@begin WizardPage7 event table entries
  EVT_BUTTON( ID_BUTTON21, WizardPage7::OnButtonProgramClick )

////@end WizardPage7 event table entries

END_EVENT_TABLE()


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage7 constructors
//

WizardPage7::WizardPage7()
{
    Init();
}

WizardPage7::WizardPage7( wxWizard* parent )
{
    Init();
    Create( parent );
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage7 creator
//

bool WizardPage7::Create( wxWizard* parent )
{
    ////@begin WizardPage7 creation
  wxBitmap wizardBitmap(wxNullBitmap);
  wxWizardPageSimple::Create( parent, NULL, NULL, wizardBitmap );

  CreateControls();
  if (GetSizer())
    GetSizer()->Fit(this);
    ////@end WizardPage7 creation
    return true;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// WizardPage7 destructor
//

WizardPage7::~WizardPage7()
{
    ////@begin WizardPage7 destruction
    ////@end WizardPage7 destruction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Member initialisation
//

void WizardPage7::Init()
{
    ////@begin WizardPage7 member initialisation
    ////@end WizardPage7 member initialisation
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Control creation for WizardPage7
//

void WizardPage7::CreateControls()
{    
    ////@begin WizardPage7 content construction
  WizardPage7* itemWizardPageSimple47 = this;

  wxBoxSizer* itemBoxSizer48 = new wxBoxSizer(wxVERTICAL);
  itemWizardPageSimple47->SetSizer(itemBoxSizer48);

  wxStaticText* itemStaticText49 = new wxStaticText;
  itemStaticText49->Create( itemWizardPageSimple47, wxID_STATIC, _("Firmware update"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer48->Add(itemStaticText49, 0, wxALIGN_LEFT|wxALL, 5);

  wxStaticText* itemStaticText50 = new wxStaticText;
  itemStaticText50->Create( itemWizardPageSimple47, wxID_STATIC, _("Press the program device button to load firmware to the selected device."), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer48->Add(itemStaticText50, 0, wxALIGN_LEFT|wxALL, 5);

  itemBoxSizer48->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  itemBoxSizer48->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  itemBoxSizer48->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxButton* itemButton54 = new wxButton;
  itemButton54->Create( itemWizardPageSimple47, ID_BUTTON21, _("Program selected device"), wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer48->Add(itemButton54, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  itemBoxSizer48->Add(5, 5, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5);

  wxStaticText* itemStaticText56 = new wxStaticText;
  itemStaticText56->Create( itemWizardPageSimple47, wxID_STATIC, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
  itemBoxSizer48->Add(itemStaticText56, 0, wxALIGN_LEFT|wxALL, 5);

    ////@end WizardPage7 content construction
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Should we show tooltips?
//

bool WizardPage7::ShowToolTips()
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get bitmap resources
//

wxBitmap WizardPage7::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
    ////@begin WizardPage7 bitmap retrieval
  wxUnusedVar(name);
  return wxNullBitmap;
    ////@end WizardPage7 bitmap retrieval
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get icon resources
//

wxIcon WizardPage7::GetIconResource( const wxString& name )
{
    // Icon retrieval
    ////@begin WizardPage7 icon retrieval
  wxUnusedVar(name);
  return wxNullIcon;
    ////@end WizardPage7 icon retrieval
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON20
//

void WizardPage1::OnButtonSelectInterfaceClick( wxCommandEvent& event )
{
    int selidx = -1;
    dlgNewVSCPSession dlg( this );

    if ( wxID_OK == dlg.ShowModal() ) {

        if ( wxNOT_FOUND != ( selidx = dlg.m_ctrlListInterfaces->GetSelection() ) ) {

            if ( 0 != selidx ) {

                ((DeviceBootloaderwizard *)GetParent())->m_bInterfaceSelected = true;

                both_interface *pBoth = 
                    (both_interface *)dlg.m_ctrlListInterfaces->GetClientData( selidx );

                if ( NULL != pBoth ) {  

                    if ( INTERFACE_CANAL == pBoth->m_type ) {

                        m_labelInterfaceSelected->SetLabel( 
                            _("CANAL - ") + 
                            pBoth->m_pcanalif->m_strDescription );

                        // Init node id combo

                        // Set size of combo
                        wxRect rc = ((DeviceBootloaderwizard *)GetParent())->
                            m_pgSelecDeviceId->m_comboNodeID->GetRect();
                        rc.SetWidth( 60 );
                        ((DeviceBootloaderwizard *)GetParent())->m_pgSelecDeviceId->m_comboNodeID->SetSize( rc );

                        // Write all id values
                        for ( int i=1; i<256; i++ ) {
                            ((DeviceBootloaderwizard *)GetParent())->m_pgSelecDeviceId->m_comboNodeID->Append( wxString::Format(_("0x%02x"), i));
                        }

                        // Select one id
                        ((DeviceBootloaderwizard *)GetParent())->m_pgSelecDeviceId->m_comboNodeID->SetValue(_("0x01"));

                        // Set the selected interface
                        ((DeviceBootloaderwizard *)GetParent())->m_csw.setInterface( pBoth->m_pcanalif->m_strDescription,
                            pBoth->m_pcanalif->m_strPath,
                            pBoth->m_pcanalif->m_strConfig,
                            pBoth->m_pcanalif->m_flags, 0, 0 );

                    }
                    else if ( ( INTERFACE_VSCP == pBoth->m_type ) && 
                        ( NULL != pBoth->m_pcanalif ) ) {

                            wxString str;
                            unsigned char GUID[16];
                            memcpy( GUID, pBoth->m_pvscpif->m_GUID, 16 );

                            m_labelInterfaceSelected->SetLabel( 
                                _("TCP/IP - ") + 
                                pBoth->m_pvscpif->m_strDescription );

                            // Fill the combo
                            for ( int i=1; i<256; i++ ) {
                                GUID[0] = i;
                                writeGuidArrayToString( GUID, str );
                                ((DeviceBootloaderwizard *)GetParent())->m_pgSelecDeviceId->m_comboNodeID->Append( str );
                            }

                            GUID[0] = 0x01;
                            writeGuidArrayToString( GUID, str );
                            ((DeviceBootloaderwizard *)GetParent())->m_pgSelecDeviceId->m_comboNodeID->SetValue( str );

                            // Set the selected interface
                            ((DeviceBootloaderwizard *)GetParent())->m_csw.setInterface( pBoth->m_pvscpif->m_strHost,
                                pBoth->m_pvscpif->m_port,
                                pBoth->m_pvscpif->m_strUser,
                                pBoth->m_pvscpif->m_strPassword );

                    }

                    /*
                    if ( INTERFACE_VSCP == subframe->m_CtrlObject.m_interfaceType ) {

                    // If server username is given and no password is entered we ask for it.
                    if ( subframe->m_CtrlObject.m_ifVSCP.m_strPassword.IsEmpty() && 
                    !subframe->m_CtrlObject.m_ifVSCP.m_strUser.IsEmpty() ) {
                    subframe->m_CtrlObject.m_ifVSCP.m_strPassword = 
                    ::wxGetTextFromUser( _("Please enter passeword"), 
                    _("Connection Test") );
                    }

                    }
                    */


                } // VSCP connection

            } // 0 == selindex
            else {
                /*
                subframe->m_BtnActivateInterface->Show( false );
                subframe->SetTitle(_("VSCP Session - Unconnected Mode"));
                subframe->Show( true );
                */
            }
        }
        else {
            
            ((DeviceBootloaderwizard *)GetParent())->m_bInterfaceSelected = false;

            wxMessageBox(_("You have to select an interface to connect to!"),
                _("Open new VSCP session"), 
                wxICON_STOP );
        }

        // Clean up listbox
        dlg.cleanupListbox();

    } // dialog

    event.Skip();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON_CHOOSE_FILE
//

void WizardPage2::OnButtonChooseFileClick( wxCommandEvent& event )
{
    m_selectedFile->SetLabel( _("---") );

    wxFileDialog *pdlg = new wxFileDialog( this,
                                            _("Intel HEX file to load"),
                                            _(""),
                                            _(""),
                                            _("*.hex") );
    if ( NULL == pdlg ) return;

    if ( pdlg->ShowModal() == wxID_OK ) {

        if ( !((DeviceBootloaderwizard *)
            GetParent())->m_pBootCtrl->loadBinaryFile( pdlg->GetPath().GetData(), HEXFILE_TYPE_INTEL_HEX8 ) ) {

                wxMessageBox( _T("Failed to load input file.!"), 
                    _T("ERROR"),
                    wxICON_WARNING | wxOK, this );
        }
        else {
            
            // Allow wizard continue
            ((DeviceBootloaderwizard *)GetParent())->m_bHexFileLoaded = true;

            wxString str = pdlg->GetFilename();
            m_selectedFile->SetLabel( pdlg->GetFilename() );
            ((DeviceBootloaderwizard *)GetParent())->
                m_pBootCtrl->showInfo( m_hexFileInfo );
        }

    }

    pdlg->Destroy(); 
    //delete pdlg;

    event.Skip();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_WIZARD_PAGE_CHANGING event handler for ID_WIZARDPAGE1
//

void WizardPage1::OnWizardpageSelectInterfacePageChanging( wxWizardEvent& event )
{
    // An interface must have been selected to be allowed to continue
    if ( event.GetDirection() ) {
        if ( !((DeviceBootloaderwizard *)GetParent())->m_bInterfaceSelected ) {
            wxMessageBox(_("An interface must be selected before you can continue!"));
            event.Veto();
        }
    }
    //event.Skip(); 
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_WIZARD_PAGE_CHANGING event handler for ID_WIZARDPAGE2
//

void WizardPage2::OnWizardpage3PageChanging( wxWizardEvent& event )
{
    // A hex file must have been loaded to be allowed to continue
    if ( event.GetDirection() ) {
        if ( !((DeviceBootloaderwizard *)GetParent())->m_bHexFileLoaded ) {
            wxMessageBox(_("Firmware code must be loaded before you can continue!"));
            event.Veto();
        }
    }
    //event.Skip(); 
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_WIZARD_PAGE_CHANGING event handler for ID_WIZARDPAGE3
//

void WizardPage3::OnWizardpage2PageChanging( wxWizardEvent& event )
{

    event.Skip(); 
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_COMMAND_CHOICE_SELECTED event handler for ID_CHOICE2
//

void WizardPage3::OnBootLoaderAlgorithmSelected( wxCommandEvent& event )
{
    // Remove previous 
    if ( NULL != ((DeviceBootloaderwizard *)GetParent())->m_pBootCtrl ) {
        delete ((DeviceBootloaderwizard *)GetParent())->m_pBootCtrl;
        ((DeviceBootloaderwizard *)GetParent())->m_pBootCtrl = NULL;
    }

    switch ( m_nBootAlgorithm->GetSelection() ) {
    
        case 0: // VSCP Standard algorithm
            ((DeviceBootloaderwizard *)GetParent())->m_pBootCtrl = 
                new CBootDevice_VSCP( 
                    &(((DeviceBootloaderwizard *)GetParent())->m_csw),
                    ((DeviceBootloaderwizard *)GetParent())->m_guid );
            break;

        case 1: // Microchip PIC 1 algorithm
            ((DeviceBootloaderwizard *)GetParent())->m_pBootCtrl = 
                new CBootDevice_PIC1( 
                    &(((DeviceBootloaderwizard *)GetParent())->m_csw),
                    ((DeviceBootloaderwizard *)GetParent())->m_guid );
            break;

        case 2:
            ((DeviceBootloaderwizard *)GetParent())->m_pBootCtrl = NULL;
            break;
    
    }
    
    event.Skip();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON_ALGORITHM_FROM_MDF
//

void WizardPage3::OnButtonAlgorithmFromMdfClick( wxCommandEvent& event )
{
    wxString strID;
    uint8_t id[ 16 ];
    wxString url;
    bool rv = true;

    // Get selected id
    strID = ((DeviceBootloaderwizard *)GetParent())->m_pgSelecDeviceId->m_comboNodeID->GetValue();

    // Get the device nickname/GUID
    if ( USE_DLL_INTERFACE == ((DeviceBootloaderwizard *)GetParent())->m_csw.getDeviceType() ) {
        *id = readStringValue( strID );
    }
    else if ( USE_TCPIP_INTERFACE == ((DeviceBootloaderwizard *)GetParent())->m_csw.getDeviceType() ) {
        getGuidFromStringToArray ( id, strID );
    }

    // Open the interface
    if ( ((DeviceBootloaderwizard *)GetParent())->m_csw.doCmdOpen() ) {

        rv = wxGetApp().loadMDF( this,
                                    &( ((DeviceBootloaderwizard *)GetParent() )->m_csw ), 
                                    &((DeviceBootloaderwizard *)GetParent())->m_mdf, 
                                    url, 
                                    id );

        if ( rv ) {
            // MDF has been fetched -
            ((DeviceBootloaderwizard *)GetParent() )->m_bMDFLoaded = true;

            // MDF has been fetched - Set algorithm
            m_nBootAlgorithm->SetSelection( ((DeviceBootloaderwizard *)GetParent())->m_mdf.m_bootInfo.m_nAlgorithm );
            OnBootLoaderAlgorithmSelected( event );
        }
        else {
            wxMessageBox(_("Failed to fetch MDF! \nIs the device active and available?"));
        }

        // Close the interface
        ((DeviceBootloaderwizard *)GetParent())->m_csw.doCmdClose();

    }
    else {
        wxMessageBox(_("Failed to open communication interface!"));
    }

    event.Skip();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON_LOAD_FILE_FROM_MDF
//

void WizardPage2::OnButtonLoadFileFromMdfClick( wxCommandEvent& event )
{
    wxString strID;
    uint8_t id[16];
    wxString url;
    DeviceBootloaderwizard *pblw = (DeviceBootloaderwizard *)GetParent();

    if ( NULL == pblw ) return;

    bool rv = true;

    // Get selected id
    strID = pblw->m_pgSelecDeviceId->m_comboNodeID->GetValue();

    // Check if the mdf has been loaded and load it if not
    if ( !pblw->m_bMDFLoaded ) {

        // Must load MDF

        // Get the device nickname/GUID
        if ( USE_DLL_INTERFACE == pblw->m_csw.getDeviceType() ) {
            *id = readStringValue( strID );
        }
        else if ( USE_TCPIP_INTERFACE == pblw->m_csw.getDeviceType() ) {
            getGuidFromStringToArray ( id, strID );
        }

        // Open the interface
        if ( pblw->m_csw.doCmdOpen() ) {

            bool rv = wxGetApp().loadMDF( this,
                                            &pblw->m_csw, 
                                            &pblw->m_mdf, 
                                            url, 
                                            id );

            if ( rv ) {
                // MDF has been fetched -
                pblw->m_bMDFLoaded = true;

            }
            else {
                rv = false;
                wxMessageBox(_("Failed to fetch MDF! \nIs the device active and available?"));
            }

            // Close the interface
            pblw->m_csw.doCmdClose();

            // Download the MDF file
            rv = pblw->m_mdf.downLoadMDF( pblw->m_mdf.m_strURL, url );
            if ( !rv ) {
                wxMessageBox(_("Failed to download mDF file! [") + 
                                pblw->m_mdf.m_strURL +
                                _("]") );
            }
            else {
                
                // Parse the file
                if ( pblw->m_mdf.parseMDF( url ) ) {
                
                    if ( !pblw->m_pBootCtrl->loadBinaryFile( 
                                                    pblw->m_mdf.m_firmware.m_strPath, 
                                                    HEXFILE_TYPE_INTEL_HEX8 ) ) {

                            wxMessageBox( _T("Failed to load input file.!"), 
                                            _T("ERROR"),
                                            wxICON_WARNING | wxOK, 
                                            this );
                    }
                    else {
                        
                        // Allow wizard continue
                        pblw->m_bHexFileLoaded = true;

                        m_selectedFile->SetLabel( url );
                        pblw->m_pBootCtrl->showInfo( m_hexFileInfo );
                    }
                }
                else {
                    rv = false;
                    wxMessageBox(_("Failed to parse file!"));
                }
            }
        }
        else {
            rv = false;
            wxMessageBox(_("Failed to open communication interface!"));
        }
    }

    event.Skip();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_WIZARD_PAGE_CHANGING event handler for ID_WIZARDPAGE5
//

void WizardPage5::OnWizardpagePreBootloadPageChanging( wxWizardEvent& event )
{
  event.Skip(); 
}





/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON21
//

void WizardPage7::OnButtonProgramClick( wxCommandEvent& event )
{
    wxString strID;
    wxBusyCursor busy;
    
    DeviceBootloaderwizard *pblw = (DeviceBootloaderwizard *)GetParent();

    // Get the device nickname/GUID
    if ( USE_DLL_INTERFACE == pblw->m_csw.getDeviceType() ) {
        pblw->m_pBootCtrl->m_guid.m_id[ 0 ] = 
            readStringValue( pblw->m_pgSelecDeviceId->m_comboNodeID->GetValue() );
    }
    else if ( USE_TCPIP_INTERFACE == pblw->m_csw.getDeviceType() ) {
        getGuidFromStringToArray ( pblw->m_pBootCtrl->m_guid.m_id, 
                                    pblw->m_pgSelecDeviceId->m_comboNodeID->GetValue() );
    }

    // Open the interface
    if ( pblw->m_csw.doCmdOpen() ) {
   
        if ( !pblw->m_pBootCtrl->setDeviceInBootMode() ) {
            wxMessageBox(_("Failed to set device in boot mode! \nWill still try to load firmware."));
        }
            
        if ( !pblw->m_pBootCtrl->doFirmwareLoad() ) {
            wxMessageBox(_("Failed to load firmware code into device!"));
        }

        // Close the interface
        pblw->m_csw.doCmdClose();
       
    }
    else {
        wxMessageBox(_("Failed to open communication interface!"));    
    }

    event.Skip(); 
}

