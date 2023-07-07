#include "main.h"
#include <stdio.h>

/**
 *main - will print the number of arguments you give it
 *@argc: represents number of arguments
 *@argv: represents an array of arguments
 *Return: Always 0
 *
 */
int main(int argc, char *argv[])
{

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);

}
