#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: last required argument
 * Return: sum of all parameters passed to it
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_ptr;
	int arg;
	int results = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args_ptr, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args_ptr, int);
		results += arg;
	}
	va_end(args_ptr);

	return (results);
}
