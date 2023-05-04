#!/bin/bash
gcc -c -Wall -Werror -fpic *.c
gcc -shared *.o -o liball.so
