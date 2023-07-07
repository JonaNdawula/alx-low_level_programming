#include "main.h"
/**
 *char *_strncat - function that concatenates two strings
 *
 *@dest: string to append to
 *
 *@src: string to be appended to the dest
 *
 *@n: bytes from src
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

	char *point = dest;

	while (*point != '\0')
	{
		point++;
	}

	while (*src != '\0' && n > 0)
	{
		*point = *src;
		point++;
		src++;
		n--;
	}

	*point = '\0';

	return (dest);

}


