#!/bin/bash
set -e
cd build
make -j$(nproc)