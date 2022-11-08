cmake_minimum_required(VERSION 3.23)
project(GreyVM_C C)

set(CMAKE_C_STANDARD 99)

add_executable(GreyVM_C main.c CPU.c CPU.h instructions.c instructions.h)
