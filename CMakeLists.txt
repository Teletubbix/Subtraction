cmake_minimum_required(VERSION 3.10)
project(Subtraction VERSION 1.0.0)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# 设置输出目录：库文件放到 lib/，可执行文件依然放 bin/
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_compile_options(-Wall -Wextra)

include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_BINARY_DIR})

configure_file(
    ${CMAKE_SOURCE_DIR}/include/config.h.in
    ${CMAKE_BINARY_DIR}/config.h
)

# ========== 新增：单独编译数学库 ==========
# 只把 math_subtract.c 编译成静态库（libmath.a）
file(GLOB MATH_SOURCES "src/math_subtract.c")
add_library(math STATIC ${MATH_SOURCES})
# =======================================

# ========== 主程序：链接数学库 ==========
# 把 main.c 和 print_output.c 编译成可执行文件
file(GLOB MAIN_SOURCES "src/main.c" "src/print_output.c")
add_executable(subtraction_calc ${MAIN_SOURCES})

# 链接数学库（告诉编译器去哪找 libmath.a）
target_link_libraries(subtraction_calc math)
# =====================================