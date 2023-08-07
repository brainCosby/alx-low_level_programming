#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point (multiply two numbers passed as command line arguments)
 * @argc: Number of command line arguments parssed
 * @argv: An array of the command line arguments passed
 * Return: Reatun 0 after successful run
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else if (argc == 1)
	{
		printf("Error\n");
	}

	return (0);
}
