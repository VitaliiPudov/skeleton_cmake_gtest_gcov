cmake_minimum_required(VERSION 3.11-3.18)

project(
    SomeProject
    VERSION 0.1
    DESCRIPTION "Some description")

set(ENABLE_UNITTESTS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g -fprofile-arcs -ftest-coverage ${CMAKE_CXX_FLAGS_DEBUG}")

set(CMAKE_CXX_CPPCHECK "cppcheck")

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmakemodules/)

add_subdirectory(somelib)
add_subdirectory(app)

if (ENABLE_UNITTESTS MATCHES ON)
    add_subdirectory(tests)
endif()
