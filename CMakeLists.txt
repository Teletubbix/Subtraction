cmake_minimum_required(VERSION 3.10)

project(Subtraction)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(subtraction main.c math_subtract.c print_output.c)