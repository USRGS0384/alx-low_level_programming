#include "function_pointers.h"

/**
 * int_index - search for integers
 * @array: index of arrays
 * @size: array size
 * @cmp: function to pointers
 * Description: function of a pointer
 * (* section header: the header of this function is function_pointers.h)*
* Return: this is a void function no return
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

			for (i = 0; i < size; i++)

			{
				if (cmp(*(array + i)))
					return (i);
			}
	return (-1);

}

