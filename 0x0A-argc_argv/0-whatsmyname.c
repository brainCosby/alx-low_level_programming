#include <stdio.h>

/**
 * main - Entry point of the program (Print the name of the program)
 * @argc: Number of command line  arguments
 * @argv: An array of the command line argumentst parsed
 * Return: Return 0 after successful run
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/* Printing the parsed to the program in the command line */
	printf("%s\n", argv[0]);

	return (0);
}
