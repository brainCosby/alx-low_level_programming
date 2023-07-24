#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: pointer to first variable
 * @b: pointer to second variable
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
