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
	int i = 0, a = 0;
	char *str, *separator = ", ";
	int args_count = 0;

	va_start(args_ptr, format);

	while (format[a])
	{
		switch (format[a])
		{
			case 's':
			case 'i':
			case 'f':
			case 'c':
				args_count++;
				break;
		}
		a++;
	}

	while (format[i])
	{
		if (i == args_count)
		{
			separator = "";
		}
		if (format[i] == 's')
		{
			str = va_arg(args_ptr, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", str, separator);
		}
		if (format[i] == 'i')
		{
			printf("%d%s", va_arg(args_ptr, int), separator);
		}
		if (format[i] == 'f')
		{
			printf("%f%s", va_arg(args_ptr, double), separator);
		}
		if (format[i] == 'c')
		{
			printf("%c%s", va_arg(args_ptr, int), separator);
		}

		i++;
	}
	printf("\n");

	va_end(args_ptr);
}
