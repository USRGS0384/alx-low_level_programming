#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Main function
*Description '[print a return of commbination of a number'
*Return: Always 0 (Success)
*/
int main(void)
{

	int x;
	int b;

	for (x = 0; x <= 98; x++)
	{
	for (b = 0; b <= 99; b++)
	{
	if (x < b)
		{
		putchar(x / 10 + 48);
		putchar(x % 10 + 48);
		putchar(' ');
		putchar(b / 10 + 48);
		putchar(b % 10 + 48);
		if (x != 98 || b != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
}

putchar('\n');
return (0);
}
