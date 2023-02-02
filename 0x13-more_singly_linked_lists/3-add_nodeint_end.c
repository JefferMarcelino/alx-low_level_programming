#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of linked list
 *
 * @head: the address to the head of list
 * @n: the int value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current = *head;

	newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
		return (NULL);

	newNode->n = (int)n;
	newNode->next = NULL;

	if (current == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = newNode;

	return (newNode);
}
