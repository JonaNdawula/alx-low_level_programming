#include "main.h"

/**
 *_isupper - checks if a letter is upper or lower case
 *
 *@c: Represents upper or lower case character
 *
 * Return: if c is uppercase 1 if c is lower case 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
