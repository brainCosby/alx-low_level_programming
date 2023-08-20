#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args_ptr;
	int i = 0;
	char *str, *separator = "";

	va_start(args_ptr, format);

	while (format && format[i])
	{
		if (format[i] == 's')
		{
			str = va_arg(args_ptr, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", separator, str);
		}
		if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args_ptr, int));
		}
		if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args_ptr, double));
		}
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args_ptr, int));
		}
		separator = ", ";
		i++;
	}
	printf("\n");

	va_end(args_ptr);
}
