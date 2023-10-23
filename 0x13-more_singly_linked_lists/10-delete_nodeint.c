#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - print that deletes the node at index
 * @head: point to the pointe the head of linked list.
 * @index: index of the node that should be deleted at start
 *
 * Return:  1 if it succeeded else -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_variable, *temp_variable2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_variable = *head;
		*head = (*head)->next;
		free(temp_variable);
		return (1);
	}

	while (i != index - 1 && temp_variable->next != NULL)
	{
		temp_variable = temp_variable->next;
		i++;
	}
	if (i == index - 1 && temp_variable->next != NULL)
	{
		temp_variable2 = temp_variable->next;
		temp_variable->next = temp_variable2->next;
		free(temp_variable2);
		return (1);
	}

	return (-1);
}
