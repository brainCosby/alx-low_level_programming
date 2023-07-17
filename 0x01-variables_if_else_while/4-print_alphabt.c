#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function main is the entry point of the program
 * Return: The program returns 0 after successful run
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n);

	return (0);
}
