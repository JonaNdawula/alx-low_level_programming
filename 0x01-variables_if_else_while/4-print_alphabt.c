#include <stdio.h>

/**
 * main - Prints all the letters except q and e
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char alph[25] = "abcdfghijklmnoprstuvwxyz";
	int num = 0;

	while (num < 25)
	{
		putchar(alph[num]);
		num++;
	}
	putchar('\n');
	return (0);
}
