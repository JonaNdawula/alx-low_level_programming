#include "main.h"
/**
 *_isupper - checks if a character is upper case
 *
 *@c: is the char to be checked by function
 *
 *Return: 1 if character is upper case, else 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}


}

