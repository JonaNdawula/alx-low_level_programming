#include "main.h"
/**
 *char *cap_string - function that capitalizes all words of a string.
 *
 *@s: string to be capitalized
 *
 * Return: s
 *
 *
 */
char *cap_string(char *s)
{

	int capnext = 1;

	while (*s != '\0')
	{
		if (capnext && (*s >= 'a' && *s <= 'z'))
		{
			*s -= 'a' - 'A';

		}


		if (*s == ' ')
		{
			capnext = 1;
		}
		else
		{
			capnext = 0;

		}

		s++;
	}
	return (s);

}
