cmake_minimum_required(VERSION 3.10)

project(Subtraction)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

file(GLOB SOURCES CONFIGURE_DEPENDS "*.c")

add_executable(subtraction ${SOURCES})