#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a binary string containing '0' and '1' characters.
 * Return: The converted unsigned integer, or 0 if input is invalid.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			res = (res << 1) | (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (res);
}
