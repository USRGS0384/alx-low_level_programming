#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the number of elements
 *         
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: All the elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
