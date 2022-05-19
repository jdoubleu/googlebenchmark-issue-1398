cmake_minimum_required(VERSION 3.22)
project(googletest_issue)
include(FetchContent)

set(CMAKE_CXX_STANDARD 20)

FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main)

FetchContent_Declare(google-benchmark
        GIT_REPOSITORY https://github.com/google/benchmark.git
        GIT_TAG v1.6.1)

FetchContent_MakeAvailable(googletest google-benchmark)

add_executable(googletest_issue main.cpp)
target_link_libraries(googletest_issue gtest_main benchmark::benchmark_main)
