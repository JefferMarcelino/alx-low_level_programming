#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a
 *                           given position
 *
 * @head: the address to the head of the list
 * @idx: the position
 * @n: the data (n) of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = *head;
	newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current != NULL && i != (idx - 1))
	{
		i++;
		current = current->next;
	}

	if (current != NULL && i == (idx - 1))
	{
		newNode->next = current->next;
		current->next = newNode;
		return (newNode);
	}

	return (NULL);
}
