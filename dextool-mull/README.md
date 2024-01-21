# Mutationg testing minimal demo

- [Mutationg testing minimal demo](#mutationg-testing-minimal-demo)
  - [Run tests with ctest](#run-tests-with-ctest)
  - [mull](#mull)
    - [Install](#install)
    - [Files](#files)
    - [Run](#run)
  - [dextool (not working 100%)](#dextool-not-working-100)
    - [Install](#install-1)
    - [Files](#files-1)
    - [Build](#build)
    - [Known issues](#known-issues)

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

## dextool (not working 100%)

### Install

https://github.com/joakim-brannstrom/dextool?tab=readme-ov-file#installation

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
dextool mutate test --debug

# Generate report
echo "--- Report ---"
dextool mutate report --style html --debug
```

### Known issues

- [ ] Only checks mathz.cpp
