#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 *@separator: string printed between strings
 *@n:number of strings passed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list stringList;

	char *st;
	unsigned int i;


	va_start(stringList, n);

	i = 0;
	while (i < n)
	{

		st = va_arg(stringList, char *);

		if (st == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);

		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}
	printf("\n");


	va_end(stringList);


}
