#!/bin/bash
gcc -Wall -Wextra -werror -pedantic -c -fpic  *.c
gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
