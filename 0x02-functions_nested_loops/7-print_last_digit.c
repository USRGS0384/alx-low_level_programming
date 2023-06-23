#include "main.h"
/**
 * print_last_digit - prints the final digit
 * @n: an integer
 * Return: final number
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
	_putchar(-m + 0);
	return (-m);
	}
	else
	{
	_putchar (m + 0);
	return (m);
	}
}
