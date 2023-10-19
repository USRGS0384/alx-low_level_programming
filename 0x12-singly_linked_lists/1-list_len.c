#include "lists.h"
/**
 * list_len -print the number of elements in a list.
 * @h: singly linked list_t list.
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
