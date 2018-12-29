# Install script for directory: /media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss

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
      "$ENV{DESTDIR}/usr/lib/libicalss.so.1.0.1"
      "$ENV{DESTDIR}/usr/lib/libicalss.so.1"
      "$ENV{DESTDIR}/usr/lib/libicalss.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/libicalss.so.1.0.1;/usr/lib/libicalss.so.1;/usr/lib/libicalss.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib" TYPE SHARED_LIBRARY FILES
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/lib/libicalss.so.1.0.1"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/lib/libicalss.so.1"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/lib/libicalss.so"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/lib/libicalss.so.1.0.1"
      "$ENV{DESTDIR}/usr/lib/libicalss.so.1"
      "$ENV{DESTDIR}/usr/lib/libicalss.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/media/panpan/tools/buildroot-2018.02.8/output/host/bin/arm-linux-gnueabihf-strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/include/libical/icalss.h;/usr/include/libical/icalcalendar.h;/usr/include/libical/icalclassify.h;/usr/include/libical/icalcluster.h;/usr/include/libical/icaldirset.h;/usr/include/libical/icaldirsetimpl.h;/usr/include/libical/icalfileset.h;/usr/include/libical/icalfilesetimpl.h;/usr/include/libical/icalgauge.h;/usr/include/libical/icalgaugeimpl.h;/usr/include/libical/icalmessage.h;/usr/include/libical/icalset.h;/usr/include/libical/icalspanlist.h;/usr/include/libical/icalssyacc.h")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/include/libical" TYPE FILE FILES
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalss.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalcalendar.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalclassify.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalcluster.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icaldirset.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icaldirsetimpl.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalfileset.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalfilesetimpl.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalgauge.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalgaugeimpl.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalmessage.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalset.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalspanlist.h"
    "/media/panpan/tools/buildroot-2018.02.8/output/build/libical-1.0.1/src/libicalss/icalssyacc.h"
    )
endif()

