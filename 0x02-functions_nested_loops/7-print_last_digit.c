#include "main.h"
/**
 * print_last_digit - prints the final digit
 * @n: an integer
 * Return: final number
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
	{
	i = i * -1;
	}
	_putchar (i + '0');
return (i);
}
