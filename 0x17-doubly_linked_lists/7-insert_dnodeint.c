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

	if (h == NULL || *h == NULL)
		return (NULL);

	current = *h;
	newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);

		return (newNode);
	}

	for (i = 0; current != NULL && i != (idx - 1); i++)
		current = current->next;

	if (current != NULL && i == (idx - 1))
	{
		newNode->next = current->next;
		newNode->prev = current;
		current->next = newNode;

		return (newNode);
	}

	free(newNode);
	return (NULL);
}
