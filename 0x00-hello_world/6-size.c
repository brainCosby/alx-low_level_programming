#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function is the entery point of the program
 * Return: Te program returns 0 after successfull run
 */
int main(viod)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n",  sizeof(int));
	printf("Size of a long: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}