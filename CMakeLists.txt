cmake_minimum_required(VERSION 3.10)
project(MyCProject C)

set(CMAKE_C_STANDARD 11)  # or 99, 17 based on your needs

# Automatically include all .c files in the current directory and subdirectories
file(GLOB SOURCES "src/*.c" "lib/*.c" "*.c")

# Add the executable
add_executable(MyCProject ${SOURCES})
