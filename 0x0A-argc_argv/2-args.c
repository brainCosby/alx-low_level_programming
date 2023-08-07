#include <stdio.h>

/**
 * main - Entry point (Print all the command line arguments parsed)
 * @argc: Number of command line arguments parsed
 * @argv: An array of command line arguments parsed
 * Return: Return 0 after successful run
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
