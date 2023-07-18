#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function main is the entry point of the program
 * Return: The program returns 0 after successfull run
 */
int main(void)
{
	int number;
	char alpha;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
