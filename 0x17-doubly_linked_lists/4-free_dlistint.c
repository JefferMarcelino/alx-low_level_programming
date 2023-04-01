#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list
 *
 * @head: the head of the linked list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->next);

		if (current->prev != NULL)
			free(current->prev);
	}
}
