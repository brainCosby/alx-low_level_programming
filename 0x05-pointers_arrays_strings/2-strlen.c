#include "main.h"

/**
 * _strlen - Checks the length of a string
 * @s: String to check
 * Return: Returns the lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
