#!/bin/bash
wget -P .. https://raw.githubusercontent.com/rumonah/alx-low_level_programming/master/0x18-dynamic_libraries/libsample.so
export LD_PRELOAD="$PWD/../libsample.so"
