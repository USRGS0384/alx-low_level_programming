#include "main.h"

/**
 * flip_bits - Counts the number of bits to be flipped from one another
 * @n: The number of bit
 * @m: The number to be flipper to another number
 * Return: The necessary number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
