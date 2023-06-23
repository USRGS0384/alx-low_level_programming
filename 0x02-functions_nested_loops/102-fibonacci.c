#include <stdio.h>
/**
* main - displayout the first 50 numbers
* fibonacci numbers of students
* Return: return 0 (Success)
*/
int main(void)
{
	int x;
	unsigned long y1 = 0, y2 = 1, y3;

	for (x = 0; x < 50; x++)
	{
	y3 = y1 + y2;
	printf("%lu", y3);
	y1 = y2;
	y2 = y3;
	if (x == 49)
	printf("\n");
	else
	printf(", ");
	}
	return (0);
}
