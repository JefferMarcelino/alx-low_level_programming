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
	int n;

	if (head == NULL)
		return (0);

        n = (*head)->n;
	current = *head;
	*head = (*head)->next;

	free(current);
	return (n);
}
