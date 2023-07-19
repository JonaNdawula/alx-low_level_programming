#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function
 *@array: given array
 *@size:size of array
 *@action: points to function
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{


	x a;

	if (array == NULL || action == NULL)
	{
		return;

	}
	else
	{

		for (a = 0; a < size ; a++)
			action(array[a]);


	}


}
