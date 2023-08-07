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

	int first_number;
	int second_number;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first_number = atoi(argv[1]);
	second_number = atoi(argv[2]);
	mul = first_number * second_number;
	printf("%d\n", mul);

	return (0);
}
