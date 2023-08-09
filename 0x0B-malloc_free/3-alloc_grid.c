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
	int **two_dim_array;

	/* if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* allocace memory for the 2D array */
	two_dim_array = (int **)malloc(height * sizeof(int));
	if (two_dim_array != NULL)
	{
		/*Allocate memory for each row and initialize elements to 0 */
		for (i = 0; i < height; i++)
		{
			two_dim_array[i] = (int *)malloc(width * sizeof(int));
			if (two_dim_array[i] == NULL)
			{
				/* Handle memory allocation failure for individual rows */
				/* Free previously allocated memory before returning NULL */
				for (j = 0; j < i; j++)
				{
					free(two_dim_array[j]);
				}
				free(two_dim_array);
				return (NULL);
			}
			/* Initialize elements to 0 */
			for (j = 0; j < width; j++)
			{
				two_dim_array[i][j] = 0;
			}
		}
		return (two_dim_array);
	}
	else
	{
		/* Handle memory allocation failure for the array of row pointers */
		return (NULL);
	}
}
