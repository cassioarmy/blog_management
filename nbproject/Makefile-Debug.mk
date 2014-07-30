#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/BlogUtil.o \
	${OBJECTDIR}/src/MainWindow.o \
	${OBJECTDIR}/src/PreferencesWindow.o \
	${OBJECTDIR}/src/TreeModelSelectedBlog.o \
	${OBJECTDIR}/src/Utils.o \
	${OBJECTDIR}/src/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=/opt/xmlrpc/stable/src/cpp/libxmlrpc++.so /opt/xmlrpc/stable/src/cpp/libxmlrpc_packetsocket.so /opt/xmlrpc/stable/lib/expat/xmlparse/libxmlrpc_xmlparse.so /opt/xmlrpc/stable/lib/expat/xmltok/libxmlrpc_xmltok.so /opt/xmlrpc/stable/lib/libutil/libxmlrpc_util.so /opt/xmlrpc/stable/src/libxmlrpc.so `pkg-config --libs gtkmm-3.0`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc: /opt/xmlrpc/stable/src/cpp/libxmlrpc++.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc: /opt/xmlrpc/stable/src/cpp/libxmlrpc_packetsocket.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc: /opt/xmlrpc/stable/lib/expat/xmlparse/libxmlrpc_xmlparse.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc: /opt/xmlrpc/stable/lib/expat/xmltok/libxmlrpc_xmltok.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc: /opt/xmlrpc/stable/lib/libutil/libxmlrpc_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc: /opt/xmlrpc/stable/src/libxmlrpc.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	g++ -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc ${OBJECTFILES} ${LDLIBSOPTIONS} -l xmlrpc_client++

${OBJECTDIR}/src/BlogUtil.o: src/BlogUtil.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/gtkmm-3.0 `pkg-config --cflags gtkmm-3.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/BlogUtil.o src/BlogUtil.cpp

${OBJECTDIR}/src/MainWindow.o: src/MainWindow.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/gtkmm-3.0 `pkg-config --cflags gtkmm-3.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/MainWindow.o src/MainWindow.cpp

${OBJECTDIR}/src/PreferencesWindow.o: src/PreferencesWindow.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/gtkmm-3.0 `pkg-config --cflags gtkmm-3.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/PreferencesWindow.o src/PreferencesWindow.cpp

${OBJECTDIR}/src/TreeModelSelectedBlog.o: src/TreeModelSelectedBlog.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/gtkmm-3.0 `pkg-config --cflags gtkmm-3.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TreeModelSelectedBlog.o src/TreeModelSelectedBlog.cpp

${OBJECTDIR}/src/Utils.o: src/Utils.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/gtkmm-3.0 `pkg-config --cflags gtkmm-3.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/Utils.o src/Utils.cpp

${OBJECTDIR}/src/main.o: src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/include/gtkmm-3.0 `pkg-config --cflags gtkmm-3.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/xmlrpc

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
