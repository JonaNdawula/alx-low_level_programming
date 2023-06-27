#include "main.h"
/**
 *puts_half - function that prints half of a string, followed by a new line
 *
 *@str: input
 *
 */
void puts_half(char *str)
{
	int a, b, len;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
		len++;

	b = (len / 2);

	if ((len % 2) == 1)
		b = ((len + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

