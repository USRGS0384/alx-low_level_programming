#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet in lowercase
* Ten times and followed by a new line
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char d;
	int c;

	c = 0;
	while (c < 10)
		c++;
	{
	d = 'a';
	while (d <= 'z')
	{
	_putchar(d);
	d++;
	}
	_putchar('\n');

	}
}

