#include "main.h"

/**
 * _islower - Checks for lower case c
 * @c: variable to check
 * Return: return 1 if lowercas else return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
