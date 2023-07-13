#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked -  a function that allocates memory using malloc.
 * @b:size
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);

	}
	else
	{

		return (ptr);
	}
}
