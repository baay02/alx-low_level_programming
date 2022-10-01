#!/bin/bash
gcc -Wall -Pedantic -Werror -Wextra -c *.c
ar rc liball.a *.o
