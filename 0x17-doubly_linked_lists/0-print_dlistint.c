#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint - a function that prints all the elements of a list
 *
 * @h: the head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *current = (dlistint_t *)h;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}

	return (size);
}
