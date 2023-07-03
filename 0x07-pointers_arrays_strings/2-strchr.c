#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 *@s: represents current chracter
 *@c: represents character being searched for
 *
 *Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

		if (*s == c)
		{

			return (s);
		}
		s++;
	}
		return ('\0') ;
}
