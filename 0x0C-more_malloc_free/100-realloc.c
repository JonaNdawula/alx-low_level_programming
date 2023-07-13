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
	unsigned int cp_size;

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

	cp_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_pt, ptr, cp_size);

	free(ptr);

	return (new_pt);


}
