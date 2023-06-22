#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name of pointer to function
 * @name: string value
 * @f: point to function
 * Return: nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
