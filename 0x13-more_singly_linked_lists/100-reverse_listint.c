#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - The reverse of a listint_t list.
 * @head: Address pointer to the head of the list_t list.
 *
 * Return: A pointer to the listint_t list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
