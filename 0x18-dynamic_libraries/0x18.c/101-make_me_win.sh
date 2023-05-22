#!/bin/bash
gcc -shared -fPIC -o mylib.so winlot.c -ldl
LD_PRELOAD=/path/to/mylib.so ./gm
