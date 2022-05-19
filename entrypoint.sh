#!/bin/bash

echo "# install dependencies"
apt update -qq && apt install -y -qq cmake make git

echo "# configure"
cmake -B build/ -DCMAKE_BUILD_TYPE=Release

echo "# build targets"
cmake --build build/ --target my_tests --parallel
cmake --build build/ --target my_benchmarks --parallel

echo "# run targets"
./build/my_tests
./build/my_benchmarks