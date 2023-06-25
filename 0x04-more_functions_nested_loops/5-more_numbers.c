#include "main.h"
/**
* more_numbers - prints numbers from 0 to 14
* Return: returns nothing
*/
void more_numbers(void)
{
	int j1, j2;

	for (j1 = 0; j1 < 10; j1++)
	{
	for (j2 = 0; j2 <= 14; j2++)
	{
	if (j2 > 9)
	{
	_putchar((j2 / 10) + '0');
	}
	_putchar((j2 % 10) + '0');
	}
	_putchar(10);
	}
}
