#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: The first string which will be the resulting string
 * @src: The second string
 * @n: number for cheching the  max number of characters to copy
 * from src
 * Return: Return the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy the string from source to the destination string */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
