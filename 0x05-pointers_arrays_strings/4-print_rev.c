#include "main.h"
#include <string.h>
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *
 *@s: string to be reversed
 */
void print_rev(char *s)
{


	if (*s != '\0')
	{
		print_rev(s + 1);

		_putchar(*s);


	}
	_putchar('\n');
}
