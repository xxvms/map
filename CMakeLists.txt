cmake_minimum_required(VERSION 3.8)
project(map)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Person.cpp Person.h)
add_executable(map ${SOURCE_FILES})