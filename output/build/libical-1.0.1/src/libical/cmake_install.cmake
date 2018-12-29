# Install script for directory: /media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}/usr/lib/libical.so.1.0.1"
      "$ENV{DESTDIR}/usr/lib/libical.so.1"
      "$ENV{DESTDIR}/usr/lib/libical.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/libical.so.1.0.1;/usr/lib/libical.so.1;/usr/lib/libical.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib" TYPE SHARED_LIBRARY FILES
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/lib/libical.so.1.0.1"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/lib/libical.so.1"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/lib/libical.so"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/lib/libical.so.1.0.1"
      "$ENV{DESTDIR}/usr/lib/libical.so.1"
      "$ENV{DESTDIR}/usr/lib/libical.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/media/panpan/tools/buildroot-2018.02.8/output/host/bin/arm-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/ical.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/include" TYPE FILE FILES "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/ical.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/libical/ical.h;/usr/include/libical/icalarray.h;/usr/include/libical/icalattach.h;/usr/include/libical/icalcomponent.h;/usr/include/libical/icalderivedparameter.h;/usr/include/libical/icalderivedproperty.h;/usr/include/libical/icalderivedvalue.h;/usr/include/libical/icalduration.h;/usr/include/libical/icalenums.h;/usr/include/libical/icalerror.h;/usr/include/libical/icallangbind.h;/usr/include/libical/icalmemory.h;/usr/include/libical/icalmime.h;/usr/include/libical/icalparameter.h;/usr/include/libical/icalparser.h;/usr/include/libical/icalperiod.h;/usr/include/libical/icalproperty.h;/usr/include/libical/icalrecur.h;/usr/include/libical/icalrestriction.h;/usr/include/libical/icaltime.h;/usr/include/libical/icaltz-util.h;/usr/include/libical/icaltimezone.h;/usr/include/libical/icaltypes.h;/usr/include/libical/icalvalue.h;/usr/include/libical/pvl.h;/usr/include/libical/sspm.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/include/libical" TYPE FILE FILES
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/ical.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalarray.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalattach.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalcomponent.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalderivedparameter.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalderivedproperty.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalderivedvalue.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalduration.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalenums.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalerror.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icallangbind.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalmemory.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalmime.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalparameter.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalparser.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalperiod.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalproperty.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalrecur.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalrestriction.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icaltime.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icaltz-util.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icaltimezone.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icaltypes.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/icalvalue.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/pvl.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libical/sspm.h"
    )
endif()

