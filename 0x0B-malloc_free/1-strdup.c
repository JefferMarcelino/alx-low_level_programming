#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @str: the string
 *
 * Return: the length of a string
 */

int _strlen(char *str)
{
	if (*str == 0)
		return (0);

	str++;
	return (1 + _strlen(str));
}

/**
 * _strdup - function that copy a string given as a parameter to a new
 *           location.
 *
 * @str: the string
 *
 * Return: the pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	if (!str)
		return (0);

	int i, size = _strlen(str);
	char *newStr = malloc(sizeof(*str) * size);

	for (i = 0; i < size; ++i)
		newStr[i] = str[i];

	return (newStr);
}
