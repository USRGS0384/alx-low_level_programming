#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print every element of a listint_t list.
 * @h: head of the list_t list pointer
 *
 * Return: All the nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
