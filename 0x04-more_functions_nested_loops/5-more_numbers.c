#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *Return: void
 *
 */
void more_numbers(void)
{
	int r;
	int c;

	for (r = 1; r <= 10; r++)
	{
		_putchar('\n');

		for (c = 0; c <= 14; c++)
		{
			_putchar(c);

		}
	}

}
