# Google Benchmark issue #1398

## UPDATE
It turns out, this is really a bug in gcc 12.1.

The error can be seen online: https://godbolt.org/z/zMqG8W7WE.

It is being tracked by the following tickets:
* https://gcc.gnu.org/bugzilla/show_bug.cgi?id=105651
* https://gcc.gnu.org/bugzilla/show_bug.cgi?id=105329

## Original
This repository reproduces issue [[BUG] build fails with libstdc++ 12.1.0](https://github.com/google/benchmark/issues/1398) with Google's Benchmark library.

You can obtain the build error from the CI at https://github.com/jdoubleu/googlebenchmark-issue-1398/actions.

You can also build the project inside a Docker container. On a linux host, with Docker installed, run: `./run-docker.sh`.

The `run-docker-benchmark.sh` script clones the [Google Benchmark](https://github.com/google/benchmark) library and builds it with bazel inside the same `gcc:latest` Docker container.