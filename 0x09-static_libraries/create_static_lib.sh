#!/bin/bash
for file in *.c;
do
    gcc -c $file;
done

ar src liball.a *.o
