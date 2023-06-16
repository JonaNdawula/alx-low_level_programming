#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10 from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	char nums[10] = "0123456789";

	for (i = 0; i < 11; i++)
	{
		putchar(nums[i]);
	}
	putchar('\n');
	return (0);
}
