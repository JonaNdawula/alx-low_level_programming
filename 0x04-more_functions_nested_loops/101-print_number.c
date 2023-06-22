#include "main.h"
/**
 *print_number - print an int
 *
 *@n: int parameter
 */
void print_number(int n)
{
	unsigned int h = n;

	if (n < 0)
	{
		_putchar(45);
		h = -h;
	}
	if (h / 10)
	{
		print_number(h / 10);
	}
	_putchar(h % 10 + '0');
}
