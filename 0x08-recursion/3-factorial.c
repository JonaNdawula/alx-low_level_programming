#include "main.h"
/**
 *factorial - returns the factorial of a given number
 *@n: number whose factorial to get
 *Return: -1 to indicate an error
 *
 */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
