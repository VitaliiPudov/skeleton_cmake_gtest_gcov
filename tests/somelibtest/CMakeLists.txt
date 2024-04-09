set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

cmake_minimum_required(VERSION 3.12)

set(test_somelib_SRC
    ${CMAKE_CURRENT_LIST_DIR}/somelibtest.cpp
)

add_executable(testsomelib ${test_somelib_SRC})
target_link_libraries(testsomelib gtest_main somelib gtest gmock)