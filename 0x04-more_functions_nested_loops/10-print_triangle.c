#include "main.h"
/**
 *print_triangle - prints a triangle, followed by a new line
 *
 *@size: variable setting triangle size
 */
void print_triangle(int size)
{
	int r, h, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (r = 1; r <= size; r++)
		{

			for (space = size - r; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}


	}


}
