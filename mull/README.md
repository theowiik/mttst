
Using mull 14.

Compile:

```
clang -fexperimental-new-pass-manager \
  -fpass-plugin=/usr/lib/mull-ir-frontend-14 \
  -g -grecord-command-line \
  main.cpp -o hello-world
```

Mutate:

```
mull-runner-14 ./hello-world
```

