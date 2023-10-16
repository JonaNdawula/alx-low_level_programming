#include "main.h"
/**
 *char *_strncpy - function that copies a string.
 *
 *@dest: string to which src is appended to
 *
 *@src: string to be appended to dest
 *
 *@n: bytes to be used at most from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{

		dest[x] = src[x];

	}


	for (; x < n; x++)
	{
		dest[x] = '\0';

	}

	return (dest);

}
