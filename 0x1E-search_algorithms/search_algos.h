#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void display_array(int *array, size_t left, size_t right);
int bin_search_for_index(int *array, size_t left, size_t right, int value);

#endif
