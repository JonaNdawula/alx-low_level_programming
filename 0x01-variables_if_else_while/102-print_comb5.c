#include <stdio.h>
/**
 * main -  prints possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
int x, z;
for (x = 0; x < 100; x++)
{
for (z = 0; z < 100; z++)
{
if (x < z)
{
putchar((x / 10) + 48);
putchar((x % 10) + 48);
putchar(' ');
putchar((z / 10) + 48);
putchar((z % 10) + 48);
if (x != 98 || z != 99)
{
putchar(',');
putchar(' ');
}
}
}
}

return (0);
}
