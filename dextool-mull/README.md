# Mutationg testing minimal demo

- [Mutationg testing minimal demo](#mutationg-testing-minimal-demo)
  - [Files from mutation testing tools](#files-from-mutation-testing-tools)
  - [dextool (work in progress)](#dextool-work-in-progress)
    - [Build](#build)
    - [Known issues](#known-issues)
  - [mull](#mull)

## Files from mutation testing tools

- dextool
  - `.dextool-mutate.toml`
  - `dextool_template` (not actually needed)
  - `build.sh`
  - `install.sh`
- mull
  - `mull.yml`

## dextool (work in progress)

Mostly based on https://github.com/joakim-brannstrom/dextool/blob/master/plugin/mutate/README_tutorial.md

### Build

Clean:

```bash
rm -rf build
rm -rf dextool_mutate.sqlite3
rm -rf html
```

Build:

```bash
mkdir build
cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
make
popd
```

Generate mutatnts:

```
dextool mutate analyze
```

Run tests:

```
dextool mutate test
```

Generate report:

```
dextool mutate report --style html
```

### Known issues

- [ ] Only checks mathz.cpp

## mull

(mull 14)

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
