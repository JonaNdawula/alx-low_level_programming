#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *
 *@n: integer provided to print line
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}

}
