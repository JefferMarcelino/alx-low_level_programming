#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a
 * given position
 *
 * @h: the head of the list
 * @idx: the given index
 * @n: the data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newNode, *current;

	current = *h;

	newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (current != NULL && idx == 0)
	{
		newNode->next = current;
		newNode->prev = NULL;
		current->prev = newNode;

		*h = newNode;

		return (newNode);
	}

	for (i = 0; current != NULL && i <= idx; i++)
	{
		if (i == idx)
		{
			current->prev->next = newNode;
			newNode->prev = current->prev;
			newNode->next = current;

			return (newNode);
		}

		current = current->next;
	}

	return (NULL);
}
