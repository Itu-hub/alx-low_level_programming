#!/bin/bash
gcc -Wall -Wextra -Werror -Wextra -c *.c
ar rc liball.a *.o
ranlib liball.a
