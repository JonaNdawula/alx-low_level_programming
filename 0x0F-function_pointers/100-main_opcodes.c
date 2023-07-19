#include <stdlib.h>
#include <stdio.h>

/**
 *main - prints opcodes
 *@argc: number of given arguments
 *@argv: array of arguments
 *Return: Always 0
 */

int main(int argc, char *argv[])
{

	int x, byts;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	x = 0;
	while (x < byts - 1)
	{

		printf("%02hhx ", array[x]);
		x++;

	}
	printf("%02hhx\n", array[x]);
	return (0);
}
