#include "main.h"
#include <stdlib.h>
/**
 *_strdup - creates a duplicate to the memory
 *@str: represents string
 *Return: ptr
 *
 */
char *_strdup(char *str)
{
	int x, y;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	x = 0;
	do {
		ptr = malloc((x + 1) *  sizeof(char));

		x++;
		if (ptr == NULL)
		{
			return (NULL);
		}
	} while (str[x] != '\0');

	for (y = 0; str[y]; y++)
	{
		ptr[y] = str[y];

	}

	return (ptr);



}
