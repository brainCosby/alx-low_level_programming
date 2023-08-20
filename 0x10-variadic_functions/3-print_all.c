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
		switch (format[i])
		{
			case 's':
			{
				str = va_arg(args_ptr, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", separator, str);
				break;
			}
			case 'i':
				printf("%s%d", separator, va_arg(args_ptr, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args_ptr, double));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(args_ptr, int));
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args_ptr);
}
