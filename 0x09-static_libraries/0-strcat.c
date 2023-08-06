#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: The first string which will be the resulting string
 * @src: The second string
 * Return: Return the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy the string from source to the destination string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
