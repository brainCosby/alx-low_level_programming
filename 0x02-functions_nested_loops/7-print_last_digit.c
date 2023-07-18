#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: variable for checking
 * Return: Return the last digit of the number
 */
int print_last_digit(int num)
{
	int digit = num % 10;

	if (digit < '0')
	{
		_putchar(-digit + '0');
		return (-digit);
	}
	else
	{
		_putchar(digit + '0');
		return (digit);
	}
}
