#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - prints that frees a singly linked list.
 * @head: head of linkely link lists
 *
 * Return: nothing
 *
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);

	free(head);

}
