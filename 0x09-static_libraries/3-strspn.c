#include "main.h"
#include <stddef.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 *@s: pointer to the null terminated string to be scanned
 *@accept:pointer to the null terminated string containing the character
 *Return: x
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int c = 0;

	while (*s != '\0')
	{
		char *acc = accept;

		while (*acc != '\0')
		{
			if (*s == *acc)
			{   c++;
				break;
			}
			acc++;
		}
		if (*acc == '\0')
		{
			break;

		}
		s++;
	}
	return (c);
}

