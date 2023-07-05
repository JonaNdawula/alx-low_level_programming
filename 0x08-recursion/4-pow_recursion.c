#include "main.h"
/**
 *_pow_recursion -  a function that returns x raised to the power of y
 *
 *@x: value to be worked on
 *@y: Exponent
 *Return:  -1 if y less than 0
 **/

int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);

	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{

		return (x * _pow_recursion(x, y - 1));
	}


}
