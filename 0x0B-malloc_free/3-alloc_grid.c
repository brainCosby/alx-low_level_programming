#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate  space for  to a 2 dimensional array of integers
 * @width: the number of columns in the grid
 * @height: the number of rows int the grid
 * Return: returns a pointer to a 2 dimensional array of integers,
 * return NULL on failure,
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/* if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* allocace memory for the 2D array */
	grid = (int **)malloc(height * sizeof(int));

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(width * sizeof(int));
			/* allocation fails */
			if (grid[i] == NULL)
			{
				/* Free previously allocated memory before returning NULL */
				for (j = 0; j < i; j++)
				{
					free(grid[j]);
				}
				free(grid);
				return (NULL);
			}
			/* initialize elements to 0 */
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
	}
	else
	{
		return (NULL);
	}
}
