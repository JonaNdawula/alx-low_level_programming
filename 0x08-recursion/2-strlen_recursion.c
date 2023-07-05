#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *
 *@s: The string whose length is to be checked
 *
 *Return: 0 if str is equal  to the terminator char
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{

		return (0);

	}
	else
	{

		return (1 + _strlen_recursion(s + 1));

	}


}
