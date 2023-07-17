#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - The main function is the entry point of the program
 * Return: The program returns 0 after successfull run
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n");
	}

	return (0);
}
