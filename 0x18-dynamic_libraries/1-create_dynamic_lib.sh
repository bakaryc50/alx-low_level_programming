#!/bin/bash
cfiles=( *.c )
gcc -c -fPIC "${cfiles[@]}"
gcc -shared -o liball.so "${cfiles[@]/%.c/.o}"
