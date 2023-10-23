#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty the o else total sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
