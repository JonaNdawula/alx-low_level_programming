#include "main.h"
#include <stdio.h>

/**
 *main - prints recieved arguments
 *@argc: argument number
 *@argv: argument array
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);

	return (0);
}
