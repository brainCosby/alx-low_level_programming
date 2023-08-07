#include <stdio.h>

/**
 * main - Entry point (print th number of command line arguments parsed)
 * @argc: Number of command line arguments parsed
 * @argv: An array of the command line arguments parsed
 * Return: Return 0 after successful run
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc);

	return (0);
}
