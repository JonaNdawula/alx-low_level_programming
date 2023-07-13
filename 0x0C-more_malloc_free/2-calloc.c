#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - makes memory for an array
 *
 * @nmemb: elements in array
 * @size: size per element
 * Return: pointer to given memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	unsigned int y =  nmemb * size;

	pt = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (pt == NULL)
	{
		return (NULL);
	}

	memory_set(pt, 0, y);
	return (pt);
}

/**
 * memory_set - fill memory with byte
 *@a: Area in memory to be filled
 *@b: copy of character
 *@c: times copied
 * Return: pointer to a
 */

char *memory_set(char *a, char b, unsigned int c)
{

	unsigned int x;

	x = 0;
	while (x < c)
	{
		a[x] = b;
		x++;
	}
	return (a);
}
