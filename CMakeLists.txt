cmake_minimum_required (VERSION 3.15)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

project (CMakeHelloWorld)

set(CMAKE_DEBUG_POSTFIX d)

#version number
set (PROJECT_VERSION_MAJOR 1)
set (PROJECT_VERSION_MINOR 0)
set (PROJECT_VERSION_PATCH 0)

#find dependencies
#find_package(cppzmq REQUIRED)

#include the subdirectory containing our libs
add_subdirectory (Hello)
include_directories(Hello)
#indicate the entry point for the executable
add_executable (CMakeHelloWorld Hello HelloWorld.cpp)
set_target_properties(CMakeHelloWorld PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

# Indicate which libraries to include during the link process.
target_link_libraries (CMakeHelloWorld Hello)

include(GNUInstallDirs)

#install (TARGETS CMakeHelloWorld COMPONENT HelloWorld DESTINATION bin)

install(TARGETS CMakeHelloWorld
    COMPONENT HelloWorld
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}/Release CONFIGURATIONS Release
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/Release CONFIGURATIONS Release
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/Release CONFIGURATIONS Release )

install(TARGETS CMakeHelloWorld
    COMPONENT HelloWorld
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}/Debug CONFIGURATIONS Debug
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/Debug CONFIGURATIONS Debug
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/Debug CONFIGURATIONS Debug)

add_subdirectory(package)