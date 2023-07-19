#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - function that prints a name
 *@name:  name to be printed
 *@f: points to a function
 *
 */
void print_name(char *name, void (*f)(char *))
{


	if (f == NULL || name == NULL)
	{

		return;
	}


	f(name);


}
