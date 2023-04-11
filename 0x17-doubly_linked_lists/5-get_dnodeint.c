#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - a function that returns the nth node of
 * a dlistint_t linked list.
 *
 * @head: the head of the linked list
 * @index: the index of a possible node
 *
 * Return: the nth node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = head;

	for (i = 0; current != NULL && i <= index; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}

	return (NULL);
}
