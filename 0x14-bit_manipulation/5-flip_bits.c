#include "main.h"

/**
 * flip_bits - Calculates the number of bits
 * needed to flip between two numbers.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}

	return (count);
}
