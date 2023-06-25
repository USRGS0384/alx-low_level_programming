#include "main.h"
/**
* print_triangle - prints the shape of a triangle
* @size: shape of a traingle
* Return: nothing
*/
void print_triangle(int size)
{
	int y1, y2;

	if (size > 0)
	{
	for (y1 = 1; y1 <= size; y1++)
	{
	for ((y2 = size - y1); y2 > 0; y2--)
	_putchar(' ');
	for (y2 = 0; y2 < y1; y2++)
	_putchar('#');
	if (y1 == size)
	continue;
	_putchar('\n');
	}
	}
	_putchar('\n');
}
