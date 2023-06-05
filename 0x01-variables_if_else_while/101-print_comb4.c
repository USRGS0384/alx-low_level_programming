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

	for (p = '0'; p <= '9'; p++)
	{
	for (m = '0'; m <= '9'; m++)
	{
	for (n = '0'; n <= '9'; n++)
	{
	if (!((n == m) || (m == p) || (m > n) || (p > m)))
	{
		putchar(p);
		putchar(m);
		putchar(n);
	if (!(n == '9' && m == '8' && p == '7'))
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

