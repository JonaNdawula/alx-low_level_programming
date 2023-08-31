#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip
 *@n: represents first number
 *@m:represents second number
 *
 *
 *Return: bits to change
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y, counter;
	unsigned long int currentNumb;

	y = 63;
	counter = 0;

	while (y >= 0)
	{
		currentNumb = (n ^ m) >> y;
		if (currentNumb & 1)
		{
			counter++;
		}
		y--;
	}

	return (counter);
}
