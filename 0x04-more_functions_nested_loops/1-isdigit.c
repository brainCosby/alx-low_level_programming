#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c: parameter for checking
 * Return: return 0 if successful and 1 if fail
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
