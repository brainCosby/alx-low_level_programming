#include "main.h"
/**
 * _memset - fill a block of memory with a constant byte
 * @s: starting address of memor
 * @b: value to use
 * @n: number of bytes to be changed
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
