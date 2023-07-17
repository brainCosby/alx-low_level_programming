#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The main function is the entry point of the program
 * Return: The program returns 0 after successfull run
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar("\n");

	return (0);
}
