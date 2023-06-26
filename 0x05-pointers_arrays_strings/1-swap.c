#include "main.h"
/**
 *swap_int -  swaps the values of two integers
 *
 *@a: The first integer to be swaped with second
 *
 * @b: The second integer to be swaped with first
 */
void  swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}
