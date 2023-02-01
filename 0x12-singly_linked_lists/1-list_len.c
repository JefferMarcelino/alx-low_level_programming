#include <stddef.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h: the head of the linked list
 *
 * Return: the number of elements on the list
 *
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t *pointer = (list_t *)h;

	while (pointer != NULL)
	{
		pointer = pointer->next;
		i++;
	}

	return (i);
}
