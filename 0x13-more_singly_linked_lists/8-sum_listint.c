#include "lists.h"

/**
 * sum_listint - function that sums all the node data (n) of list
 *
 * @head: the pointer to the head of a list
 *
 * Return: the sum of all the node data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	while ((current = head) != NULL)
	{
		sum += current->n;
		head = head->next;
	}

	return (sum);
}
