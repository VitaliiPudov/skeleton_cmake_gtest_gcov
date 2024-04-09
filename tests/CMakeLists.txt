set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmakemodules/)

SET(CMAKE_CXX_FLAGS "-std=c++17 -g ${CMAKE_CXX_FLAGS}")

if (NOT TARGET gtest_main)
    add_subdirectory(googletest)
endif ()

include_directories(${gtest_SOURCE_DIR}/include ${gmock_SOURCE_DIR}/include)

add_subdirectory(somelibtest)

set(test_main_sources
    main.cpp
    ${CMAKE_CURRENT_LIST_DIR}/somelibtest/somelibtest.cpp
)

add_executable(test_main ${test_main_sources})
target_link_libraries(test_main gtest_main somelib gtest gmock)

include(CodeCoverage)

setup_target_for_coverage_gcovr_html(
    NAME coverage
    EXECUTABLE test_main
    BASE_DIRECTORY "${PROJECT_SOURCE_DIR}"
    EXCLUDE "tests/*"
)