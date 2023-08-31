#include "main.h"
/**
 *get_endianness - function checking endianness
 *
 *Return: 0 (big endian) 1 (little endian)
 *
 *
 */

int get_endianness(void)
{
	unsigned int y = 1;

	if ((y & 0XFF) == 1)
	{

		return (1);
	}
	else
	{
		return (0);

	}


}
