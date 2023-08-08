#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point (add all numbers passed as command line arguments)
 * @argc: Number of command line arguments parssed
 * @argv: An array of the command line arguments passed
 * Return: Reatun 0 after successful run
 */
int main(int argc, char *argv[])
{
	int count1;
	int number;
	int add = 0;
	int count2;
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (count1 = 1; count1 < argc; count1++)
	{
		for (i = 0; argv[count1][i]; i++)
		{
			if (!isdigit(argv[count1][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (count2 = 1; count2 < argc; count2++)
	{
		number = atoi(argv[count2]);
		add += number;
	}

	printf("%d\n", add);

	return (0);
}
