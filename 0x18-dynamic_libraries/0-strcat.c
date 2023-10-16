#include "main.h"
/**
 *char *_strcat - function that concatenates two strings
 *
 *@dest:string to which we append
 *
 *@src:string to be appended
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *point = dest;

	while (*point != '\0')
	{
		point++;
	}

	while (*src != '\0')
	{

		*point = *src;
		point++;
		src++;
	}

	*point = '\0';

	return (dest);

}
