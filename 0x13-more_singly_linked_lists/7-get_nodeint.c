#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of list
 *
 * @head: the pointer to the list
 * @index: the index
 *
 * Return: the nth node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL && i != index)
	{
		i++;
		current = current->next;
	}

	if (current != NULL && i == index)
		return (current);

	return (NULL);
}
