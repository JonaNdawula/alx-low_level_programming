#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -c -fPIC *.c
gcc -shared -o liball.so *.o
