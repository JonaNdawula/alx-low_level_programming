#include "main.h"
/**
 *jack_bauer - prints Jack Bauers daily minutes
 *
 */
void jack_bauer(void)
{
int a, b;
a = 0;
while (a < 24)
{
b = 0;
while (b < 60)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar((':') + '0');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
b++;
}
a++;
}
}
