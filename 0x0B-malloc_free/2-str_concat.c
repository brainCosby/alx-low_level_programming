#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second sting
 * Return: a pointer to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	char *concatenated;
	int i;

	/* treate s1 and s2 as empty string if NULL */
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	/* calculate the lenght of s1 and s2 */
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	/* allocace memory for the concatenated string */
	concatenated = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	/* if it fails to create the space for the string */
	if (concatenated == NULL)
	{
		return (NULL);
	}
	/* Copy the characters from s1 to concatenated */
	for (i = 0; i < s1_len; i++)
	{
		concatenated[i] = s1[i];
	}
	concatenated[s1_len] = ' ';
	/* Copy the characters from s2 to concatenated */
	for (i = 0; i < s2_len; i++)
	{
		concatenated[s1_len + i + 1] = s2[i];
	}
	/* add a null terminator to the concatenated string */
	concatenated[s1_len + s2_len + 1] = '\0';
	return (concatenated);
}
