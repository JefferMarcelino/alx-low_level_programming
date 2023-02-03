#include "lists.h"

/**
 * reverse_listint -  function that reverses a linked list
 *
 * @head: the head of a linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *current, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;
	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;

	return (previous);
}
