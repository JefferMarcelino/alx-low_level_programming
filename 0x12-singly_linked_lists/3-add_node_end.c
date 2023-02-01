#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 *
 * @head: the address to the head of the list
 * @str: the new node string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(newNode));
	list_t *temp;

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
