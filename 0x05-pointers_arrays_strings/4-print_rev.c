#include "main.h"

/**
 * print_rev - Print in reverse
 * @s: String to print
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length -= 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
