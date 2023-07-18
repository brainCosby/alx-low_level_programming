#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function main is the entery point of the program
 * Return: The program returns 0 after successful run
 */
int main(void)
{
	char smile;

	for (smile = 'z'; smile >= 'a'; smile--)
	{
		putchar(smile);
	}
	putchar('\n');

	return (0);
}
