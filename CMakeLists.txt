cmake_minimum_required(VERSION 3.15)
project(SeaBattle C)

set(CMAKE_C_STANDARD 99)

add_executable(SeaBattle main.c gameplay.c gameplay.h grapgics.c grapgics.h testData.c testData.h)