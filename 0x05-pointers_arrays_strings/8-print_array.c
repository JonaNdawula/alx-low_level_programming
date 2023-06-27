#include "main.h"
#include <stdio.h>
/**
 *print_array - function printing n elements of an array
 *
 *@a: name of array
 *
 *@n: number of element
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d,", a[y]);

	}
	if (y == (n - 1))
	{
		printf("%d", a[n - 1]);

	}
	printf("\n");
}
