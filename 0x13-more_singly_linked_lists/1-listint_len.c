#include "lists.h"

/**
 * listint_len - function that counts the elements of a linked list
 *
 * @h: the pointer to the head of a list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	listint_t *current = (listint_t *)h;

	while (current != NULL)
	{
		current = current->next;
		len++;
	}

	return (len);
}
