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
	${OBJECTDIR}/src/HdfsFile.o \
	${OBJECTDIR}/src/ThriftGen/BucketStoreMapping.o \
	${OBJECTDIR}/src/ThriftGen/bucketupdater_constants.o \
	${OBJECTDIR}/src/ThriftGen/bucketupdater_types.o \
	${OBJECTDIR}/src/ThriftGen/scribe.o \
	${OBJECTDIR}/src/ThriftGen/scribe_constants.o \
	${OBJECTDIR}/src/ThriftGen/scribe_types.o \
	${OBJECTDIR}/src/conf.o \
	${OBJECTDIR}/src/conn_pool.o \
	${OBJECTDIR}/src/dynamic_bucket_updater.o \
	${OBJECTDIR}/src/env_default.o \
	${OBJECTDIR}/src/file.o \
	${OBJECTDIR}/src/network_dynamic_config.o \
	${OBJECTDIR}/src/scribe_server.o \
	${OBJECTDIR}/src/store.o \
	${OBJECTDIR}/src/store_queue.o


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
LDLIBSOPTIONS=-L/usr/local/lib

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk bin/xscribe

bin/xscribe: ${OBJECTFILES}
	${MKDIR} -p bin
	${LINK.cc} -o bin/xscribe ${OBJECTFILES} ${LDLIBSOPTIONS} -lrt -lgflags -lglog -lpthread -lboost_system -lboost_thread -lboost_filesystem -lsnappy -lfb303 -lthrift -lthriftnb -levent

${OBJECTDIR}/src/HdfsFile.o: nbproject/Makefile-${CND_CONF}.mk src/HdfsFile.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/HdfsFile.o src/HdfsFile.cpp

${OBJECTDIR}/src/ThriftGen/BucketStoreMapping.o: nbproject/Makefile-${CND_CONF}.mk src/ThriftGen/BucketStoreMapping.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/ThriftGen
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/ThriftGen/BucketStoreMapping.o src/ThriftGen/BucketStoreMapping.cpp

${OBJECTDIR}/src/ThriftGen/bucketupdater_constants.o: nbproject/Makefile-${CND_CONF}.mk src/ThriftGen/bucketupdater_constants.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/ThriftGen
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/ThriftGen/bucketupdater_constants.o src/ThriftGen/bucketupdater_constants.cpp

${OBJECTDIR}/src/ThriftGen/bucketupdater_types.o: nbproject/Makefile-${CND_CONF}.mk src/ThriftGen/bucketupdater_types.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/ThriftGen
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/ThriftGen/bucketupdater_types.o src/ThriftGen/bucketupdater_types.cpp

${OBJECTDIR}/src/ThriftGen/scribe.o: nbproject/Makefile-${CND_CONF}.mk src/ThriftGen/scribe.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/ThriftGen
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/ThriftGen/scribe.o src/ThriftGen/scribe.cpp

${OBJECTDIR}/src/ThriftGen/scribe_constants.o: nbproject/Makefile-${CND_CONF}.mk src/ThriftGen/scribe_constants.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/ThriftGen
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/ThriftGen/scribe_constants.o src/ThriftGen/scribe_constants.cpp

${OBJECTDIR}/src/ThriftGen/scribe_types.o: nbproject/Makefile-${CND_CONF}.mk src/ThriftGen/scribe_types.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/ThriftGen
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/ThriftGen/scribe_types.o src/ThriftGen/scribe_types.cpp

${OBJECTDIR}/src/conf.o: nbproject/Makefile-${CND_CONF}.mk src/conf.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/conf.o src/conf.cpp

${OBJECTDIR}/src/conn_pool.o: nbproject/Makefile-${CND_CONF}.mk src/conn_pool.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/conn_pool.o src/conn_pool.cpp

${OBJECTDIR}/src/dynamic_bucket_updater.o: nbproject/Makefile-${CND_CONF}.mk src/dynamic_bucket_updater.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/dynamic_bucket_updater.o src/dynamic_bucket_updater.cpp

${OBJECTDIR}/src/env_default.o: nbproject/Makefile-${CND_CONF}.mk src/env_default.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/env_default.o src/env_default.cpp

${OBJECTDIR}/src/file.o: nbproject/Makefile-${CND_CONF}.mk src/file.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/file.o src/file.cpp

${OBJECTDIR}/src/network_dynamic_config.o: nbproject/Makefile-${CND_CONF}.mk src/network_dynamic_config.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/network_dynamic_config.o src/network_dynamic_config.cpp

${OBJECTDIR}/src/scribe_server.o: nbproject/Makefile-${CND_CONF}.mk src/scribe_server.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/scribe_server.o src/scribe_server.cpp

${OBJECTDIR}/src/store.o: nbproject/Makefile-${CND_CONF}.mk src/store.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/store.o src/store.cpp

${OBJECTDIR}/src/store_queue.o: nbproject/Makefile-${CND_CONF}.mk src/store_queue.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	$(COMPILE.cc) -g -DHAVE_CONFIG_H -DSTDC_FORMAT_MACROS -I/usr/local/include/thrift -I/usr/local/include/thrift/fb303 -o ${OBJECTDIR}/src/store_queue.o src/store_queue.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} bin/xscribe

# Subprojects
.clean-subprojects:
