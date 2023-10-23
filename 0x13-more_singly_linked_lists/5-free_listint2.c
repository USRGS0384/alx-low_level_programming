#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that Frees a listint_t list.
 * @head: pointer to address of the head of the listint_t list.
 * Description: Sets the head to NULL.
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
