#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning a linked list
 *
 * @head: the address of the head
 * @n: the value to the new node
 *
 * Return: the address to the new node, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
		return (NULL);

	newNode->n = (int)n;
	newNode->next = NULL;

	if (*head != NULL)
		newNode->next = *head;

	*head = newNode;

	return (newNode);
}
