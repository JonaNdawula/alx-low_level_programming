#include "main.h"
/**
 *_isdigit - a function that checks for a digit (0 through 9).
 *
 *@c: the number to be checked
 *
 *Return: 1 if c is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}

	return (0);
}
