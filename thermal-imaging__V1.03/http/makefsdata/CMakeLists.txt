cmake_minimum_required(VERSION 3.13)
project(makefsdata C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(htmlgen
 makefsdata.c
)

target_include_directories(htmlgen
         PRIVATE ../../../../src/include/
         PRIVATE ../../../../contrib/ports/unix/port/include/
         PRIVATE ${CMAKE_CURRENT_LIST_DIR})
