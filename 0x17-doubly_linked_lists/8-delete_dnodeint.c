#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - a function that deletes the node at index index
 * of a dlistint_t linked list
 *
 * @head: the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);

		return (1);
	}

	for (i = 0; current != NULL && i <= index; i++)
	{
		if (i == index && current != NULL)
		{
			current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;

			free(current);

			return (1);
		}

		current = current->next;
	}

	return (-1);
}
