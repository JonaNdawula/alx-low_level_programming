#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array and initializes it with a specific char
 *@size: the amount of space needed
 *@c: initializes array
 *Return: NULL else ptr
 *
 */
char *create_array(unsigned int size, char c)
{

	char *ptr = malloc(size * sizeof(char));

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (size == 0)
	{
		return (NULL);

	}
	else
	{
		return (ptr);
	}

	free(ptr);
}
