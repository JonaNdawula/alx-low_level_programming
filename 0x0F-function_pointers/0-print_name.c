#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - function that prints a name
 *@name:  name to be printed
 *@f: points to a function
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (f == NULL)
	{

		printf("%s\n",name);
	}
	else
	{

		f(name);

	}

}
