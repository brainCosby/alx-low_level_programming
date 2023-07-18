#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function main is the entery point of the program
 * Return: The program returns 0 after successfull run
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
