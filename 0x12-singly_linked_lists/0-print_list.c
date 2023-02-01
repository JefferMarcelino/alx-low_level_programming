#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * _strlen - function that count the chars from a string
 *
 * @str: the string
 *
 * Return: length of the string
 */

int _strlen(char *str)
{
	if (str == 0 || *str == 0)
		return (0);
	str++;
	return (1 + _strlen(str));
}

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: the linkedin list
 *
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	list_t *pointer = (list_t *)h;

	if (!pointer)
		return (i);

	while (pointer != NULL)
	{
		if (pointer->str != NULL)
			printf("[%d] %s", _strlen(pointer->str), pointer->str);
		else
			printf("[0] (nil)");

		printf("\n");
		pointer = pointer->next;
		i++;
	}

	return (i);
}
