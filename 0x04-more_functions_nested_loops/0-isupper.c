#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: varible for checking
 * Return: return 1 if successful and 0 if fail
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
