#include "function_pointers.h"

/**
 * array_iterator - write a parameter of each element
 * @array - iterate
 * @size - rray size
 * @action - function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)

	{
		for (i = 0; i < (int)size; i++)
		{

			action(array[i]);
		}
	}
}
