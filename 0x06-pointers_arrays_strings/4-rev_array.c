#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers
 *
 *@a:point to the array
 *
 *@n: number of elements in array
 *
 *
 */
void reverse_array(int *a, int n)
{

	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int tmp = a[i];

		a[i] = a[j];

		a[j] = tmp;

	}



}
