#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - returns sum
 *@a: first number
 *@b: second number
 * Return: sum c
 */
int op_add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}
/**
 *op_sub - returns the difference
 *@a: first number
 *@b: second number
 * Return: difference between numbers c
 */

int op_sub(int a, int b)
{
	int c = a - b;

	return (c);
}

/**
 *op_mul - returns the product
 *@a:first number
 *@b:second number
 * Return: c the product
 */
int op_mul(int a, int b)
{
	int c;

	c = a * b;

	return (c);
}

/**
 *op_div - returns result of division
 *@a: first integer
 *@b: second integer
 *Return: quotient c
 */
int op_div(int a, int b)
{
	int c = a / b;

	return (c);
}

/**
 *op_mod - returns remainder of division
 *@a: first integer
 *@b: second integer
 *Return: modulo c
 */
int op_mod(int a, int b)
{
	int c = a % b;

	return (c);
}
