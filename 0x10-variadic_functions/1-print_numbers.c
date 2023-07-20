#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - a function that prints numbers, followed by a new line.
 *@separator: string printed between numbers
 *@n: number of integers passed to function
 *@...: number to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list integers;
	unsigned int i;


	va_start(integers, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(integers, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	printf("\n");


	va_end(integers);

}
