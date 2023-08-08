#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: - size of array
 * @c: initial character
 * Return: a pointer to the array, or NULL if it fails and NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *my_array;

	/* if size = 0 */
	if (size == 0)
	{
		return (NULL);
	}
	my_array = (char *)malloc(size * sizeof(char));

	/* if it fails to initialize array */
	if (my_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		my_array[i] = c;
	}

	return (my_array);
}
