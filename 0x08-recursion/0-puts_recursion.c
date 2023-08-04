#include "main.h"
/**
 * _puts_recursion - Print string followed by new line
 * @s: parameter for the string
 * Return: return 0 after successful run
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
