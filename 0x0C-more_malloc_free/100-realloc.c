#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - reallocates memory block
 *@ptr: old pointer to old memory
 *@old_size: size of old memory
 *@new_size: size of new memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new_pt;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_pt = malloc(sizeof(char) * new_size);

	if (new_pt == NULL)
	{
		return (NULL);
	}

	if (old_size < new_size)
		return (memcpy(new_pt, ptr, old_size));
	else
		return (memcpy(new_pt, ptr, new_size));

	free(ptr);

	return (new_pt);


}
