# Mutationg testing minimal demo

- [Mutationg testing minimal demo](#mutationg-testing-minimal-demo)
  - [dextool](#dextool)
    - [Build](#build)
    - [Known issues](#known-issues)
  - [mull](#mull)

## dextool

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

Using mull 14.

Clean:

```bash
rm -rf build
```

Build:

```bash
mkdir build
cd build
cmake -DCMAKE_CXX_COMPILER=clang++ \
  -DCMAKE_CXX_FLAGS="-O0 -fexperimental-new-pass-manager -fpass-plugin=/usr/lib/mull-ir-frontend-14 -g -grecord-command-line -stdlib=libc++" \
  ..
make
```

```
mull-runner-14 ./unit_tests
```
