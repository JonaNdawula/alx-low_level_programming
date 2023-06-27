#include "main.h"
/**
 *puts2 - prints every other character of a string
 *
 *@str: numbers to print
 *
 */
void puts2(char *str)
{

	int st = 0;
	int x = 0;
	char *z = str;

	int y;

	while (*z != '\0')
	{
		z++;
		st++;
	}

	x = st - 1;

	for (y = 0; y <= x; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}

	}

	_putchar('\n');
}
