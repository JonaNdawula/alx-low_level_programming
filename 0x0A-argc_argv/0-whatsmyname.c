#include "main.h"
#include <stdio.h>

/**
 *main - prints its name, followed by a new line.
 *@argc: will print the number of arguments
 *@argv: An array of the given arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);

	}

	return (0);
}
