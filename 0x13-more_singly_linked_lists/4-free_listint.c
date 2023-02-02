#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that fress a linked list
 *
 * @head: the pointer to the head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
