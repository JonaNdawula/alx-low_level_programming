#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - function that prints the sum of the two diagonals
 *
 *@a:points to the array
 *
 *@size: The size of the array
 */

void print_diagsums(int *a, int size)
{

	int diagSum1 = 0;
	int diagSum2 = 0;
	int j;

	for (j = 0; j < size; j++)
	{

		diagSum1 += *(a + j * size + j);
		diagSum2 += *(a + j * size + (size - j - 1));


	}
	printf("%d,", diagSum1);
	printf("%d", diagSum2);

}
