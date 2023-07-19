#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - shows results of some math operations
 *@argc: arguments given
 *@argv: pointer array to arguments
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{

	int int1, int2;

	char *op;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int1 = atoi(argv[1]);
	op = argv[2];
	int2 = atoi(argv[3]);


	if (get_op_func(operator) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);

	}

	if ((*op == '/' && int2 == 0) || (*op == '%' && int2 == 0))
	{

		printf("Error\n");
		exit(100);

	}

	printf("%d\n", get_op_func(op)(int1, int2));

	return (0);
}
