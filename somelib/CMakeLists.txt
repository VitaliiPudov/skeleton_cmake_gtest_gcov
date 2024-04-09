cmake_minimum_required(VERSION 3.11-3.18)

project(somelib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(somelib_SRC
    somelib.cpp
)

add_library(somelib ${somelib_SRC})