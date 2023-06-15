#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	Printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	Printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	Printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
	Printf("Size of a long long: %lu bytes(s)\n", sizeof(long long int));
	Printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
