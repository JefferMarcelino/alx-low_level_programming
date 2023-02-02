#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 *
 * @head: the address to the head of the linked list
 * @index: the nth node that will be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *temp;

	if (head == NULL  || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && i != (index - 1))
	{
		i++;
		current = current->next;
	}

	if (current != NULL && i == (index - 1))
	{
		temp = current->next;
		current->next = temp->next;
		free(temp);

		return (1);
	}

	return (-1);
}
