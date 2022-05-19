cmake_minimum_required(VERSION 3.18)
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

add_executable(my_tests tests.cpp)
target_link_libraries(my_tests gtest_main)

add_executable(my_benchmarks benchmarks.cpp)
target_link_libraries(my_benchmarks benchmark::benchmark_main)
