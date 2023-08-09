#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the 2D grid memory
 * @height: height of the 2D grid
 * @grid: the 2D grid to be freed
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
