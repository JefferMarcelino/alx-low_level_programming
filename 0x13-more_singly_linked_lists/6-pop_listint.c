#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *
 * @head: the address to the head node
 *
 * Return: the head node's data(n), or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n = 1;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(current);

	return (n);
}
