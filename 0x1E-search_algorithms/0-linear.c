#include "search_algos.h"

/**
 *linear_search -searches for a value in an
 *array of integers using the Linear search algorithm
 *
 *@array: points to first element of the Array to search in
 *@size: elements in the array
 *@value:value to be searched for
 *
 *Return: index where value is first located
 *
 */
int linear_search(int *array, size_t size, int value)
{

	size_t x = 0;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}

	while (x < size)
	{

		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
		x++;
	}

	return (-1);
}
