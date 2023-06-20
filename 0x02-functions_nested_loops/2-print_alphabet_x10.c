#include "main.h"
/**
 * print_alphabet_x10 - is printing alphabet in lowercase
 *
 *
 */
void print_alphabet_x10(void)
{
char car;
int num;
num = 0;
while (num < 10)
{
while (car <= 'z')
{
_putchar(car);
car++;
}
_putchar('\n');
num++;
}
}
