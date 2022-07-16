# Install script for directory: /home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui

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
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.60-1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.60-1")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.60-1"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/build/libcalamaresui.so.3.2.60-1")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.60-1" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.60-1")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.60-1"
         OLD_RPATH "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so.3.2.60-1")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/build/libcalamaresui.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so"
         OLD_RPATH "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/build:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamaresui.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares" TYPE FILE FILES
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/Branding.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/ViewManager.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/modulesystem" TYPE FILE FILES
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/modulesystem/CppJobModule.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/modulesystem/ModuleFactory.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/modulesystem/ModuleManager.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/modulesystem/ProcessJobModule.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/modulesystem/PythonJobModule.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/modulesystem/PythonQtViewModule.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/modulesystem/ViewModule.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/utils" TYPE FILE FILES
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/utils/CalamaresUtilsGui.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/utils/ImageRegistry.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/utils/Paste.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/utils/PythonQtUtils.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/utils/Qml.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/utils/QtCompat.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/viewpages" TYPE FILE FILES
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/BlankViewStep.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/ExecutionViewStep.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/PythonQtGlobalStorageWrapper.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/PythonQtJob.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/PythonQtUtilsWrapper.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/PythonQtViewStep.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/QmlViewStep.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/Slideshow.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/viewpages/ViewStep.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xCALAMARESx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/widgets" TYPE FILE FILES
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/widgets/ClickableLabel.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/widgets/ErrorDialog.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/widgets/FixedAspectRatioLabel.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/widgets/LogWidget.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/widgets/PrettyRadioButton.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/widgets/TranslationFix.h"
    "/home/leonid/neco-arch/archiso/kde/calamares-pkg/src/calamares/src/libcalamaresui/widgets/WaitingWidget.h"
    )
endif()

