#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separates the printed strings
 * @n: last required argument(number of strings passed)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned int i;
	char *arg;

	va_start(args_ptr, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args_ptr, char *);
		if (arg == NULL)
		{
			arg = "(nil)";
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s%s", arg, separator);
		}
		else
		{
			printf("%s", arg);
		}
	}
	printf("\n");
}
