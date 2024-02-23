# Mutationg testing minimal demo

- [Mutationg testing minimal demo](#mutationg-testing-minimal-demo)
  - [Run tests with ctest](#run-tests-with-ctest)
  - [mull](#mull)
    - [Install](#install)
    - [Files](#files)
    - [Run](#run)

## Run tests with ctest

```bash
rm -rf build
mkdir build
cd build
cmake ..
make
ctest --output-on-failure
```

## mull

(mull 14)

### Install

https://mull.readthedocs.io/en/latest/Installation.html

### Files

`mull.yml`

### Run

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
