#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 *
 *@n: decimal number to print in binary
 *
 */

void print_binary(unsigned long int n)
{
	int x, counter;
	unsigned long int currentNumb;

	x = 63;
	counter = 0;

	while (x >= 0)
	{
		currentNumb = n >> x;


		if (currentNumb & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}

		x--;
	}
	if (!counter)
	{
		_putchar('0');
	}

}
