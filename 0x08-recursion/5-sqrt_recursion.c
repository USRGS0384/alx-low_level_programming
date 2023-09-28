#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number of square root to be calculated
 * Return: The square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square of a number
 * @n: calculate the number of square root
 * @i: iterator
 * Return: the resul of a sqaure
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * 1 > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
