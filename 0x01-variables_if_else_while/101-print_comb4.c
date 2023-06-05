#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Main function
*Description 'prints all possible different combinations of three digits'
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;
	int p;

	for (n = '0'; n <= '9'; n++)
	{
	for (m = '0'; m <= '9'; m++)
	{
	for (p = '0'; p <= '9'; p++)
	{
	if (!((n == m) || (m == p) || (m > n) || (p > m)))
	{
		putchar(p);
		putchar(m);
		putchar(n);
	if (!(p == '9' && m == '7' && n == '0'))
	{
	putchar(',');
	putchar(' ');
	}
				}
			}
		}
	}
putchar('\n');
return (0);
}

