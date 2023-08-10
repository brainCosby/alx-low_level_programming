#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previouslycreated by your alloc_grid function.
 * @grid: the grid to free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
