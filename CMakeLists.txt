cmake_minimum_required(VERSION 3.30)
project(fn C)

set(CMAKE_C_STANDARD 11)

add_executable(fn main.c
        "fn_add.c")
