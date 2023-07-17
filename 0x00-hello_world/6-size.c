#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function is the entery point of the program
 * Return: Te program returns 0 after successfull run
 */
int main(viod)
{
	printf("Size of a char: %d byte(s)\n",  (int)sizeof(char));
	printf("Size of a int: %d byte(s)\n",  (int)sizeof(int));
	printf("Size of a long: %d byte(s)\n", (int)sizeof(long));
	printf("Size of a long long: %d byte(s)\n", (int)sizeof(long long));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float));

	return (0);
}
