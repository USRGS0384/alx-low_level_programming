 #include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: number of bit to the pointer
 * @index: start indices at 0.
 * Return: If there is no error then 1 else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
