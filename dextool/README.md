## Minimal dextool demo with Catch2

Mostly based on https://github.com/joakim-brannstrom/dextool/blob/master/plugin/mutate/README_tutorial.md

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

## Known issues

- [ ] Only checks mathz.cpp
