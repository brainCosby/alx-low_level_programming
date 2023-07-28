#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: first striing
 * @s2: second string
 * Return: negative if s1 is less than s2 (characters)
 * positive if s1 greater than s2
 * zero if identical
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)(*s1) - (int)(*s2));
}
