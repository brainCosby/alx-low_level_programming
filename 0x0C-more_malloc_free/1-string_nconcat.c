#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to allocate.
 * Return: pointer to the allocated memory.
 * if it fails to allocate, return 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len_s1, len_s2, len_result, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n > len_s2)
		n = len_s2;

	len_result = len_s1 + n;

	result = malloc(len_result + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_result; i++)
		if (i < len_s1)
			result[i] = s1[i];
		else
			result[i] = s2[i - len_s1];

	result[i] = '\0';

	return (result);
}
