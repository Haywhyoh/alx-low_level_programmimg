#ifndef _SORTING_ALGOS_H
#define _SORTING_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t high, size_t low);
int b_search(int *array, size_t high, size_t low, int value);
int binary_search(int *array, size_t size, int value);
#endif
