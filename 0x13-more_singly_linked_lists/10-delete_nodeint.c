#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - print that deletes the node at index
 * @head: point to the pointe the head of linked list.
 * @index: index of the node that should be deleted at start
 *
 * Return:  1 if it succeeded else -1 if failed.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
