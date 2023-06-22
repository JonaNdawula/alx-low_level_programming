#include "main.h"
/**
 *print_triangle - prints a triangle, followed by a new line
 *
 *@size: variable setting triangle size
 */
void print_triangle(int size)
{
	int a, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (a = 1; a < size; a++)
		{

			_putchar(' ');

		}

		for (z = 1; z <= a; z++)
		{

			_putchar('#');
		}
	}


}
