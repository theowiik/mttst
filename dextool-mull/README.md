# Mutationg testing minimal demo

- [Mutationg testing minimal demo](#mutationg-testing-minimal-demo)
  - [Run tests with ctest](#run-tests-with-ctest)
  - [dextool (work in progress)](#dextool-work-in-progress)
    - [Install](#install)
    - [Files](#files)
    - [Build](#build)
    - [Known issues](#known-issues)
  - [mull](#mull)
    - [Install](#install-1)
    - [Files](#files-1)
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

## dextool (work in progress)

### Install

TODO

### Files

- `.dextool-mutate.toml`
- `dextool_template` (not actually needed)
- `build.sh`
- `install.sh`

### Build

Mostly based on https://github.com/joakim-brannstrom/dextool/blob/master/plugin/mutate/README_tutorial.md

```bash
# Clean
rm -rf build
rm -rf dextool_mutate.sqlite3
rm -rf html

# Build
mkdir build
cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
make
popd

# Generate mutants
echo "--- Analyze ---"
dextool mutate analyze --threads 1

# Run tests
echo "--- Test ---"
dextool mutate test

# Generate report
echo "--- Report ---"
dextool mutate report --style html
```

### Known issues

- [ ] Only checks mathz.cpp

## mull

(mull 14)

### Install

TODO

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
