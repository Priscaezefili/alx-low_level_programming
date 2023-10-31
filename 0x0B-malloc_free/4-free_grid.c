#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid
 * @height: Height of the grid
 * @grid: Dimensional array of integers
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
