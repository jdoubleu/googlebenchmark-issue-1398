#!/bin/bash

docker run --rm -t -v $PWD:/app -w /app gcc:latest './entrypoint-benchmark.sh'