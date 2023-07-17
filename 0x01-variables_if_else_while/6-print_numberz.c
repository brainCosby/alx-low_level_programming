#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function main is the entry point of the program
 * Return: The program returns 0 after successfull run
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
