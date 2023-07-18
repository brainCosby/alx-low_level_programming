#include "main.h"

/**
 * _isalpha - Checks for alphabets
 * @c: variable for checking
 * Return: returns 1 if alphabet else return 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
