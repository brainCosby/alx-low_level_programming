#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate  space for  to a 2 dimensional array of integers
 * @width: the number of columns in the grid
 * @height: the number of rows int he grid
 * Return: returns a pointer to a 2 dimensional array of integers,
 * return NULL on failure,
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, a;
	int b;
	int **two_dim_array;

	/* if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* allocace memory for the 2D array */
	two_dim_array = (int **)malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		two_dim_array[i] = (int *)malloc(width * sizeof(int));
	}
	/* if it fails to create the space for the 2D array */
	if (two_dim_array == NULL)
	{
		return (NULL);
	}

	/* initialize all elements of the 2D array to 0 */
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			two_dim_array[a][b] = 0;
		}
	}

	return (two_dim_array);
}
