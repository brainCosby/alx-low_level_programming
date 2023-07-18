#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function main is the entry point for the program
 * Return: The program returns 0 after successfull run
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10 num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; mum2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);

			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
