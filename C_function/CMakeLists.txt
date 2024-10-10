cmake_minimum_required(VERSION 3.29)
project(C_function C)

set(CMAKE_C_STANDARD 11)

add_executable(C_function main.c
        cmake-build-debug/sum.h)
