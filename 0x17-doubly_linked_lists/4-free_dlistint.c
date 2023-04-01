#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->prev);
		free(current->next);
	}
}
