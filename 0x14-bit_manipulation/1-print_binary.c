#include "main.h"
/**
 *print_binary - prints binary form of decimal number
 *
 *@n: number to be converted
 *
 *
 */
void print_binary(unsigned long int n)
{

	int y;
	int cnt = 0;
	unsigned long int curr;

	y = 63;

	while (y >= 0)
	{
		curr = n >> y;

		if (curr & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
		{

			_putchar('0');

		}
		y--;

	}

	if (!cnt)
	{
		_putchar('0');
	}

}
