#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - a function showing pointer to a 2 dimensional array of integers.
 * @width:  width of grid
 * @height: height of grid
 * Return: gri
 */
int **alloc_grid(int width, int height)
{
	int **gri;
	int a, b;

	gri = malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (gri == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gri[a] = malloc(sizeof(int) * width);
		if (gri[a] == NULL)
		{
			for (; a >= 0; a--)
				free(gri[a]);
			free(gri);

			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			gri[a][b] = 0;
	}
	return (gri);
}
