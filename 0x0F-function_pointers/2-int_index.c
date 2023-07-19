#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: pointer to the given array
 *@size: number of items in array
 *@cmp: pointer to function comparing values
 *Return: -1 if no element matches search
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	y b;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);

	}
	else
	{

		for (b = 0; b < size; b++)
			if (cmp(array[b]))
				return (b);

	}

	return (-1);



}
