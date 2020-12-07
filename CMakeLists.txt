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

# Indicate which libraries to include during the link process.
target_link_libraries (CMakeHelloWorld Hello)

install (TARGETS CMakeHelloWorld COMPONENT HelloWorld DESTINATION bin)

add_subdirectory(package)