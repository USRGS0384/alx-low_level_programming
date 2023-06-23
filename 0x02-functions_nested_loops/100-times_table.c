#include "main.h"
/**
* print_times_table - prints the  times table with
* parameter
* @n: parameter
* Return: returns nothing
*/
void print_times_table(int n)
{
	int a, c, y;

	if (n <= 15 && n >= 0)
	{
	for (a = 0; a <= n; a++)
	{
	_putchar('0');
	for (c = 1; c <= n; c++)
	{
	_putchar(',');
	_putchar(' ');
	y = a * c;
	if (y <= 99)
	_putchar(' ');
	if (y <= 9)
	_putchar(' ');
	if (y >= 100)
	{
	_putchar((y / 100) + '0');
	_putchar((y / 10) % 10 + '0');
	}
	else if (y <= 99 && y >= 10)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
		}
	}
}
