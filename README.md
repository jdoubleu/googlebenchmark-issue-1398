# Google Benchmark issue #1398
This repository reproduces issue [[BUG] build fails with libstdc++ 12.1.0](https://github.com/google/benchmark/issues/1398) with Google's Benchmark library.

You can obtain the build error from the CI at https://github.com/jdoubleu/googlebenchmark-issue-1398/actions.

You can also build the project inside a Docker container. On a linux host, with Docker installed, run: `./run-docker.sh`.

The `run-docker-benchmark.sh` script clones the [Google Benchmark](https://github.com/google/benchmark) library and builds it with bazel inside the same `gcc:latest` Docker container.