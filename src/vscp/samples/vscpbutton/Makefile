### Begin DialogBlocks generated body
################################################################################
# Makefile generated by DialogBlocks
#
# Available configurations:
# release
# debug
# unicoderelease
# unicodedebug
################################################################################

CONFIG=release

# release
ifeq ($(CONFIG),release)
WXWIN=/home/akhe/development/wxGTK-2.8.7
TOOLCHAINNAME=gtk2
WXVERSION:=$(shell echo `$(WXWIN)/GCCBuildReleaseGTK2/wx-config --version`)
CXX=g++
RESCOMP=windres.exe
RCFILEOBJ=vscpbutton_rc.o
RCFILESRC=vscpbutton.rc
RESOURCEOBJECT=
MACPACKAGEINFO=
OUTPUTPATH=GCCRelease
OBJECTPATH=GCCRelease
BUILDPATHS=$(OBJECTPATH)
PROGRAM=vscpbutton
LIBS=`$(WXWIN)/GCCBuildReleaseGTK2/wx-config --inplace --exec-prefix="$(WXWIN)/GCCBuildReleaseGTK2" --libs`
LINKERFLAGS=
WARNINGFLAGS=-Wall
OPTFLAGS=-O
DEBUGFLAGS=
LIBPATH=
CPPINC=`$(WXWIN)/GCCBuildReleaseGTK2/wx-config --inplace --cxxflags`
GCCFLAGS=
LDFLAGS=$(LIBS) $(LIBPATH) $(LINKERFLAGS)
CPPFLAGS=$(CPPINC) $(GCCFLAGS) $(DEBUGFLAGS) $(OPTFLAGS) $(WARNINGFLAGS)
LIBDIRNAME=$(WXWIN)/GCCBuildReleaseGTK2/lib
RESPATH=--include-dir "$(WXWIN)/include" --include-dir "$(WXWIN)/contrib/include" --include-dir "$(WXWIN)/GCCBuildReleaseGTK2/lib/wx/include/gtk2-ansi-release-static-2.8"

# debug
else
ifeq ($(CONFIG),debug)
WXWIN=/home/akhe/development/wxGTK-2.8.7
TOOLCHAINNAME=gtk2d
WXVERSION:=$(shell echo `$(WXWIN)/GCCBuildDebugGTK2/wx-config --version`)
CXX=g++
RESCOMP=windres.exe
RCFILEOBJ=vscpbutton_rc.o
RCFILESRC=vscpbutton.rc
RESOURCEOBJECT=
MACPACKAGEINFO=
OUTPUTPATH=GCCDebug
OBJECTPATH=GCCDebug
BUILDPATHS=$(OBJECTPATH)
PROGRAM=vscpbutton
LIBS=`$(WXWIN)/GCCBuildDebugGTK2/wx-config --inplace --exec-prefix="$(WXWIN)/GCCBuildDebugGTK2" --libs`
LINKERFLAGS=
WARNINGFLAGS=-Wall
OPTFLAGS=-O0
DEBUGFLAGS=-ggdb
LIBPATH=
CPPINC=`$(WXWIN)/GCCBuildDebugGTK2/wx-config --inplace --cxxflags`
GCCFLAGS=
LDFLAGS=$(LIBS) $(LIBPATH) $(LINKERFLAGS)
CPPFLAGS=$(CPPINC) $(GCCFLAGS) $(DEBUGFLAGS) $(OPTFLAGS) $(WARNINGFLAGS)
LIBDIRNAME=$(WXWIN)/GCCBuildDebugGTK2/lib
RESPATH=--include-dir "$(WXWIN)/include" --include-dir "$(WXWIN)/contrib/include" --include-dir "$(WXWIN)/GCCBuildDebugGTK2/lib/wx/include/gtk2-ansi-debug-static-2.8"

# unicoderelease
else
ifeq ($(CONFIG),unicoderelease)
WXWIN=/home/akhe/development/wxGTK-2.8.7
TOOLCHAINNAME=gtk2
WXVERSION:=$(shell echo `$(WXWIN)/GCCBuildReleaseGTK2/wx-config --version`)
CXX=g++
RESCOMP=windres.exe
RCFILEOBJ=vscpbutton_rc.o
RCFILESRC=vscpbutton.rc
RESOURCEOBJECT=
MACPACKAGEINFO=
OUTPUTPATH=GCCUnicodeRelease
OBJECTPATH=GCCUnicodeRelease
BUILDPATHS=$(OBJECTPATH)
PROGRAM=vscpbutton
LIBS=`$(WXWIN)/GCCBuildReleaseGTK2/wx-config --inplace --exec-prefix="$(WXWIN)/GCCBuildReleaseGTK2" --libs`
LINKERFLAGS=
WARNINGFLAGS=-Wall
OPTFLAGS=-O
DEBUGFLAGS=
LIBPATH=
CPPINC=`$(WXWIN)/GCCBuildReleaseGTK2/wx-config --inplace --cxxflags`
GCCFLAGS=
LDFLAGS=$(LIBS) $(LIBPATH) $(LINKERFLAGS)
CPPFLAGS=$(CPPINC) $(GCCFLAGS) $(DEBUGFLAGS) $(OPTFLAGS) $(WARNINGFLAGS)
LIBDIRNAME=$(WXWIN)/GCCBuildReleaseGTK2/lib
RESPATH=--include-dir "$(WXWIN)/include" --include-dir "$(WXWIN)/contrib/include" --include-dir "$(WXWIN)/GCCBuildReleaseGTK2/lib/wx/include/gtk2-ansi-release-static-2.8"

# unicodedebug
else
WXWIN=/home/akhe/development/wxGTK-2.8.7
TOOLCHAINNAME=gtk2d
WXVERSION:=$(shell echo `$(WXWIN)/GCCBuildDebugGTK2/wx-config --version`)
CXX=g++
RESCOMP=windres.exe
RCFILEOBJ=vscpbutton_rc.o
RCFILESRC=vscpbutton.rc
RESOURCEOBJECT=
MACPACKAGEINFO=
OUTPUTPATH=GCCUnicodeDebug
OBJECTPATH=GCCUnicodeDebug
BUILDPATHS=$(OBJECTPATH)
PROGRAM=vscpbutton
LIBS=`$(WXWIN)/GCCBuildDebugGTK2/wx-config --inplace --exec-prefix="$(WXWIN)/GCCBuildDebugGTK2" --libs`
LINKERFLAGS=
WARNINGFLAGS=-Wall
OPTFLAGS=-O0
DEBUGFLAGS=-ggdb
LIBPATH=
CPPINC=`$(WXWIN)/GCCBuildDebugGTK2/wx-config --inplace --cxxflags`
GCCFLAGS=
LDFLAGS=$(LIBS) $(LIBPATH) $(LINKERFLAGS)
CPPFLAGS=$(CPPINC) $(GCCFLAGS) $(DEBUGFLAGS) $(OPTFLAGS) $(WARNINGFLAGS)
LIBDIRNAME=$(WXWIN)/GCCBuildDebugGTK2/lib
RESPATH=--include-dir "$(WXWIN)/include" --include-dir "$(WXWIN)/contrib/include" --include-dir "$(WXWIN)/GCCBuildDebugGTK2/lib/wx/include/gtk2-ansi-debug-static-2.8"
endif
endif
endif

OBJECTS=$(OBJECTPATH)/vscpbuttonapp.o $(OBJECTPATH)/vscpbutton.o $(OBJECTPATH)/configuration.o $(RESOURCEOBJECT)

all:	$(BUILDPATHS) $(MACPACKAGEINFO) $(OUTPUTPATH)/$(PROGRAM)

$(OBJECTPATH):
	mkdir -p $(OBJECTPATH)

clean:
	rm -f $(OBJECTPATH)/*.o
	rm -f $(OBJECTPATH)/*.res
	rm -fr .deps .pch
	rm -fr $(PROGRAM).app
	rm -f $(OUTPUTPATH)/$(PROGRAM)

help:
	@echo "Usage: make -f Makefile CONFIG=[release|debug|unicoderelease|unicodedebug] [all|clean|help]"

$(OUTPUTPATH)/$(PROGRAM):	$(OBJECTS)
	$(CXX) -o $@ $(OBJECTS) $(LDFLAGS)


# Windows only
$(OBJECTPATH)/$(RCFILEOBJ):	$(RCFILESRC)
	$(RESCOMP) --use-temp-file -i$< -o$@ $(RESPATH) --include-dir . --define NOPCH

# Mac only
$(OUTPUTPATH)/$(PROGRAM).app/Contents/PkgInfo: $(OUTPUTPATH)/$(PROGRAM) $(WXWIN)/src/mac/carbon/Info.plist.in $(WXWIN)/src/mac/carbon/wxmac.icns
	mkdir -p $(OUTPUTPATH)/$(PROGRAM).app/Contents
	mkdir -p $(OUTPUTPATH)/$(PROGRAM).app/Contents/MacOS
	mkdir -p $(OUTPUTPATH)/$(PROGRAM).app/Contents/Resources
	sed -e "s/IDENTIFIER/$(PROGRAM)/" \
	-e "s/EXECUTABLE/$(PROGRAM)/" \
	-e "s/VERSION/$(WXVERSION)/" \
	$(WXWIN)/src/mac/carbon/Info.plist.in >$(OUTPUTPATH)/$(PROGRAM).app/Contents/Info.plist
	echo -n "APPL????" >$(OUTPUTPATH)/$(PROGRAM).app/Contents/PkgInfo
	ln -f $(OUTPUTPATH)/$(PROGRAM) $(OUTPUTPATH)/$(PROGRAM).app/Contents/MacOS/$(PROGRAM)
	cp -f $(WXWIN)/src/mac/carbon/wxmac.icns $(OUTPUTPATH)/$(PROGRAM).app/Contents/Resources/wxmac.icns

$(OBJECTPATH)/vscpbuttonapp.o:	vscpbuttonapp.cpp vscpbuttonapp.h vscpbutton.h vscpbutton_symbols.h
	$(CXX) -c -o $@ $(CPPFLAGS) vscpbuttonapp.cpp

$(OBJECTPATH)/vscpbutton.o:	vscpbutton.cpp vscpbutton.h vscpbutton_symbols.h
	$(CXX) -c -o $@ $(CPPFLAGS) vscpbutton.cpp

$(OBJECTPATH)/configuration.o:	configuration.cpp configuration.h configuration_symbols.h
	$(CXX) -c -o $@ $(CPPFLAGS) configuration.cpp

.PHONY:	all clean
### End DialogBlocks generated body
