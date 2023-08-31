#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *
 *@b: ponts to the string representing binary number
 *
 *Return: converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int x;

	unsigned int deciVal = 0;

	if (b == NULL)
	{
		return (0);
	}
	x = 0;

	while (b[x])
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		deciVal = 2 * deciVal + (b[x] - '0');
		x++;
	}
	return (deciVal);
}
