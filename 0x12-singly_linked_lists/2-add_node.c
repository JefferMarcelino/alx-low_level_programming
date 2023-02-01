#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 *
 * @head: the adress to the head of the list
 * @str: the new node string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(temp));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->next = NULL;

	if (*head != NULL)
		temp->next = *head;
	*head = temp;

	return (temp);
}
