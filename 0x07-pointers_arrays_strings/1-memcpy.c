#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@dest: represents destination memory
 *@src: points to memory area to be copies
 *@n: bytes to be copied
 *Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int y = 0;

	while (y < n)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
