#include <stdio.h>
/**
* main - prints multiple counts of numbers of 3 or 5 below 1024
* Return: return 0 (success)
*/
int main(void)
{
	int i, add = 0;

	for (i = 0; i < 1024; i++)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
	add += i;
	}
	printf("%d\n", add);
	return (0);
}
