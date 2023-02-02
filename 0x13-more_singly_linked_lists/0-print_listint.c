#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of linked list
 *
 * @h: the pointer to the head of a list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *current = (listint_t *)h;

	while (current != NULL)
	{
		printf("%d\n", current->n);

		current = current->next;
		i++;
	}

	return (i);
}
