#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list
 *
 * @head: the head of the linked list
 * @n: the data of a new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = (int)n;
	newNode->next = *head;
	newNode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newNode;

	(*head) = newNode;

	return (newNode);
}
