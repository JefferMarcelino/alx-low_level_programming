#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a new node at the
 * end of a dlistint_t list
 *
 * @head: the head of the linked list
 * @n: the data of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	if (head == NULL)
		return (NULL);

	current = *head;
	newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (current == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}

	while (current->next != NULL)
		current = current->next;

	newNode->prev = current;
	current->next = newNode;

	return (newNode);
}
