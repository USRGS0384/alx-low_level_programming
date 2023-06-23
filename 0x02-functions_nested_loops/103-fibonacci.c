#include <stdio.h>
/**
* main - prints addition of even fibonacci numbers
* Fibonacci numbers
* fibonacci suit numbers
* Return: return 0 (Success)
*/
int main(void)
{
	unsigned long a1 = 0, a2 = 1, a3 = 0, add = 0;

	while (a3 <= 4000000)
	{
	a3 = a1 + a2;
	a1 = a2;
	a2 = a3;
	if ((a1 % 2) == 0)
	add += a1;
	}
	printf("%ld\n", add);
	return (0);
}
