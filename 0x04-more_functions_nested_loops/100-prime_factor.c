#include <stdio.h>
/**
* main - prints the largest prime factor of a number
* Return: 0
*/
int main(void)
{
	long n = 612852475143;
	int q;

	while (q++ < n / 2)
	{
	if (n % q == 0)
	{
	n /= 2;
	continue;
	}
	for (q = 3; q < n / 2; q += 2)
	{
	if (n % q == 0)
	n /= q;
	}
	}
	printf("%ld\n", n);
	return (0);
}
