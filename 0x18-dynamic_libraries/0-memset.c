#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *@s: pointer
 *@b: constant byte in s
 *@n: bytes to be filled
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned char valInBytes = (unsigned char) b;

	unsigned int x = 0;

	while (x < n)
	{
		s[x] = valInBytes;
		x++;
	}
	return (s);
}
