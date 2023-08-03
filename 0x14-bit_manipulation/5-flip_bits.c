#include "main.h"

/**
 *flip_bits -	returns the number of bits you would need to flip
 *
 *@n:represents first number
 *@m: represents second number
 *
 *Return: bits to change
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, counter;
	unsigned long int currentNumb;

	x = 63;
	counter = 0;

	while (x >= 0)
	{
		currentNumb = (n ^ m) >> x;
		if (currentNumb & 1)
		{
			counter++;
		}
		x--;
	}
	return (counter);

}
