#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char alp[27] = "abcefghijklmnopqrstuvwxyz";

	for (i = 26; i > 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
