cmake_minimum_required(VERSION 3.12)

project(appMain)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(appMain main.cpp)

target_link_libraries(appMain
    somelib
)
