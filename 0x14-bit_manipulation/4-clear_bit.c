#include "main.h"
/**
 *clear_bit - sets value of given bit to 0 at given index
 *
 *@n: A pointer to number to change
 *@index: index of bit to be cleared
 *
 *Return: 1 (success) -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
