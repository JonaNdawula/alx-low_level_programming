#include "3-calc.h"
/**
 *get_op_func -choses function
 *@s: operator passed
 *Return: pointer to function given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


	for (i = 0; ops[i].op != NULL && *(ops[i].op) != *s; i++)
	{
	}

	return (ops[i].f);
}
