#include "main.h"
#include <stddef.h>
/**
 * *_strchr - a function that locates a character in a string.
 *@s: represents current chracter
 *@c: represents character being searched for
 *
 *Return: s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; i >= '\0'; i++)
	{

		if (s[i] == c)
		{

			return (s + i);
		}


	}
	return (NULL);
}
