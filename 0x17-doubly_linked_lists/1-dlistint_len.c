#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a
 * linked dlistint_t list
 *
 * @h: the head of the linked list
 *
 * Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *current = (dlistint_t *)h;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		current = current->next;
		size++;
	}

	return (size);
}
