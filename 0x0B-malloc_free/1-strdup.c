#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string given
 * Return: Returns NULL if str = NULL,
 * a pointer to the duplicated string on success,
 * NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len = 0;
	int count;

	/* if the string is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* calculate the lenght of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* allocace memory for the duplicate string */
	dup_str = (char *)malloc((len + 1) * sizeof(char));

	/* if it fails to create the space for the string */
	if (dup_str == NULL)
	{
		return (NULL);
	}

	/* copy the string into the dup_str */
	for (count = 0; str[count] != '\0'; count++)
	{
		dup_str[count] = str[count];
	}
	dup_str[count++] = '\0';

	/* return the duplicate string */
	return (dup_str);
}
