#include "main.h"

/**
 *get_endianness -   a function that checks the endianness.
 *
 *Return: 0 (if big endian), 1 (if little endian)
 *
 */

int get_endianness(void)
{
	unsigned int x = 1;
	unsigned char *ch = (unsigned char *)&x;

	if (*ch == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
