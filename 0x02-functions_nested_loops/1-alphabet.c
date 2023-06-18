#include "main.h"
/**
 * print_alphabet - in lowercase then new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char aplhabet;

	for (alphabet = 'a'; alphabet <= '122'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
