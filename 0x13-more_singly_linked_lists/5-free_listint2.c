#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that fress a linked list and sets the head to NULL
 *
 * @head: the address to the head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((head != NULL) && ((current = *head) != NULL))
	{
		*head = (*head)->next;
		free(current);
	}
}
