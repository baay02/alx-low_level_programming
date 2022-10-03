#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional grid previously
 * created by alloc_grid function
 * @grid: double pointers to multi-dim array
 * @height: height of grid
 * Retunr: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

