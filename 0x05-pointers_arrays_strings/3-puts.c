#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to hold address of string
 */
void _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
