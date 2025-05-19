cmake_minimum_required(VERSION 3.25.1)
project(MyProject C)

set(CMAKE_C_STANDARD 17)

add_executable(Athena chunk.c main.c memory.c debug.c)
