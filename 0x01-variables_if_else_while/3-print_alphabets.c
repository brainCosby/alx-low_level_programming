#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function main is the entery point of the program
 * Return: The program returns 0 after successfull run
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
