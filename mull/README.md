- [Setup](#setup)
  - [Requirements](#requirements)
  - [Install](#install)
- [Run Unit Tests](#run-unit-tests)
- [Run Mutation Testing](#run-mutation-testing)

## Setup

### Requirements

- Mull 14

### Install

https://mull.readthedocs.io/en/latest/Installation.html

## Run Unit Tests

```bash
rm -rf build
mkdir build
cd build
cmake ..
make
ctest --output-on-failure
```

## Run Mutation Testing

```bash
# Clean
rm -rf build

# Build
mkdir build
cd build
cmake -DCMAKE_CXX_COMPILER=clang++ \
  -DCMAKE_CXX_FLAGS="-O0 -fexperimental-new-pass-manager -fpass-plugin=/usr/lib/mull-ir-frontend-14 -g -grecord-command-line -stdlib=libc++" \
  ..
make

mull-runner-14 ./unit_tests
```
