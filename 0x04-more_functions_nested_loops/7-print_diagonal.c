#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	int x, z;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
	for (z = 0; z < x; z++)
	_putchar(' ');
	_putchar('\\');
	if (x == (n - 1))
	continue;
	_putchar('\n');
	}
	}
	_putchar('\n');
}
