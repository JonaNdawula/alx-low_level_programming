#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index.
 *
 *@n: A pointer to the number to change
 *@index: index of bit to be cleared
 *
 *Return: 1 (success) -1 (failure)
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1ul << index);

	return (1);

}
