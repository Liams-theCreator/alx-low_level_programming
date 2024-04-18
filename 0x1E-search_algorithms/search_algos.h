#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* task prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/* helper prototypes */
int recursive_bin_search(int *array, int value, int Ub, int Lb);
int binSearch(int *array, int value, int Ub, int Lb);
int _min(int a, int b);
size_t _pow(int a, int n);
#endif
