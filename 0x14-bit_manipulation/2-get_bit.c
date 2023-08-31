#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index
 *
 *@n: to be searched
 *
 *@index: index of bit
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	return ((n >> index) & 1);

}
