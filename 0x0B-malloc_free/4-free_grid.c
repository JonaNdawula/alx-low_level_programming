#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free 2d array
 *@grid: 2 dimensional grid
 *@height: height of grid
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);

}
