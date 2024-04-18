#!/bin/bash

gcc -g -Wall -Wextra -Werror -pedantic -std=gnu89 $1 $2 $3 -o tests/out.a

./tests/out.a
