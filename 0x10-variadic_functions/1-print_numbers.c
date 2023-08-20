#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separates the printed numbers
 * @n: last required argument(number of integers passed)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned int i;
	int arg;

	va_start(args_ptr, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args_ptr, int);
		if (separator != NULL)
		{
			printf("%d%s", arg, separator);
		}
		else
		{
			printf("%d", arg);
		}
	}
	printf("\n");

}
