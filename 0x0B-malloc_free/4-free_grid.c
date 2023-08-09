#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated for grid
 * @grid: Grid to free
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
