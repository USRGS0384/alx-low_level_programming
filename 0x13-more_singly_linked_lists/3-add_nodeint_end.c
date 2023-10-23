#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: point to the pointer of head of linked list.
 * @n: add to the list.
 *
 * Return: pointer of the new element else NULL if it failed.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *traverse = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (traverse->next != NULL)
		traverse = traverse->next;

	traverse->next = new_node;
	return (new_node);
}
