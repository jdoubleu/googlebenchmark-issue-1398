#!/bin/bash
# This just builds google-benchmark library inside a Docker container with g++ 12.1

echo "# setup environment"
apt update -qq && apt install -y -qq curl

echo "# install bazel"
curl -LO https://github.com/bazelbuild/bazelisk/releases/download/v1.11.0/bazelisk-linux-amd64
chmod +x ./bazelisk-linux-amd64

echo "# clone repository"
git clone https://github.com/google/benchmark.git google-benchmark

echo "# build & test"
cd google-benchmark/
../bazelisk-linux-amd64 test
