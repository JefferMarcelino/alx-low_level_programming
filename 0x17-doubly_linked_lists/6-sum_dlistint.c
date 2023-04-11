#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: the head of the linked list
 *
 * Return: the sum, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
