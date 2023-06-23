#include <stdio.h>
/**
* main - prints  98
* fibonacci suit numbers
* Return: return 0
*/
int main(void)
{
	int x;
	unsigned long p1 = 0, p2 = 1, p3;
	unsigned long p1_q1, p1_q2, p2_q1, p2_q2;
	unsigned long q1, q2;

	for (x = 0; x < 92; x++)
	{
	p3 = p1 + p2;
	printf("%lu, ", p3);
	p1 = p2;
	p2 = p3;
	}
	p1_q1 = p1 / 10000000000;
	p2_q1 = p2 / 10000000000;
	p1_q2 = p1 % 10000000000;
	p2_q2 = p2 % 10000000000;
	for (x = 93; x < 99; x++)
	{
	q1 = p1_q1 + p2_q1;
	q2 = p1_q2 + p2_q2;
	if ((p1_q2 + p2_q2) > 9999999999)
	{
	q1 += 1;
	q2 %= 10000000000;
	}
	printf("%lu%lu", q1, q2);
	if (x != 98)
	printf(", ");
	p1_q1 = p2_q1;
	p1_q2 = p2_q2;
	p2_q1 = q1;
	p2_q2 = q2;
	}
	printf("\n");
	return (0);
}
