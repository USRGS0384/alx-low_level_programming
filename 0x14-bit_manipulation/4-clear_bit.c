#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: bit pointer.
 * @index: start indices at 0.
 * Return: 1 if no error occurs esle -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
