#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *
 *@s: holds bytes in string accept
 *@accept: represents a string
 * Return: s otherwise NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{

			if (*s == *c)
			{
				return (s);

			}

			c++;

		}

		s++;

	}

	return (NULL);

}
