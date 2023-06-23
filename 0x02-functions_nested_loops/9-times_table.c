#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	int m, z, q;

	for (m = 0; m  <= 9; m++)
	{
	_putchar('0');
	for (z = 1; z <= 9; z++)
	{
	_putchar(',');
	_putchar(' ');
	q = m * z;
	if (q <= 9)
	_putchar(' ');
	else
	_putchar((q / 10) + '0');
	_putchar((q % 10) + '0');
	}
	_putchar('\n');
	}
}
