#include "variadic_functions.h"
/**
 *sum_them_all -  a function that returns the sum of all its parameters.
 *@n: first param
 *Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list vl;

	unsigned int i, sumOfNumbers = 0;

	va_start(vl, n);
	i = 0;
	while (i  < n)
	{

		sumOfNumbers += va_arg(vl, int);
		i++;
	}
	va_end(vl);

	return (sumOfNumbers);
}
