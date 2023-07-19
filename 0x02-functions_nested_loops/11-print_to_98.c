#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print to numbers to 98 in order
 * @n: number to start printing from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d, ", n)
	}
	printf("\n");
}
