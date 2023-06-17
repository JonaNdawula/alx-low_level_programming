#include <stdio.h>
/**
 * main - a program that prints different combinations of numbers
 *
 * Return: Always 0
 */
int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (m != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);

}
