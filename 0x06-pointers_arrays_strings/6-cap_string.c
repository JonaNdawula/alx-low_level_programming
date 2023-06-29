#include "main.h"
/**
 *char *cap_string - function that  string.
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


		if (*s == ' ' || *s == '\t' || *s == '\n')
		{
			capnext = 1;
		}
		else  if (*s == ',' || *s == ';' || *s == '.')
		{
			capnext = 1;

		}
		else if (*s == '!' || *s == '?' || *s == '"')
		{
			capnext = 1;
		}
		else if (*s == '(' || *s == '{' || *s == '}')
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
