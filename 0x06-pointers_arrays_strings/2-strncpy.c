#include "main.h"

/**
 * _strncpy - Copies a string into another
 * @dest: Destination for the  string bieng coppied
 * @src: The source of the string to be coppied
 * @n: The maximum nber of characters to copy from the source string
 * Return: Return the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (*src_ptr != '\0' && n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}

	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}

	return (dest);
}
