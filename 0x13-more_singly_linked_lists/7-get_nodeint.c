#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - find node of listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: Get indices at the beginning - 0
 *
 * Return: Locate note esle NULL:
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
