#include "main.h"
#include <stdlib.h>
/**
 **array_range - makes an array of int
 *
 *@min: minimum values stored
 *@max: maximum values stored
 *Return: pointer for new array
 */
int *array_range(int min, int max)
{
	int *point, x, s;

	if (min > max)
	{
		return (NULL);
	}

	s = max - min + 1;

	point = malloc(s * sizeof(int));

	if (point == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (min <= max)
	{
		point[x] = min++;
		x++;
	}
	return (point);


}
