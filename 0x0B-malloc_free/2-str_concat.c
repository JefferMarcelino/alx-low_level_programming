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
	if (!str)
		return (0);
	if (*str == 0)
		return (0);
	str++;
	return (_strlen(str) + 1);
}

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer to a newly allocated space which contains the s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1Size, s2Size, totalSize;
	int i;

	s1Size = _strlen(s1);
	s2Size = _strlen(s2);
	totalSize = s1Size + s2Size;

	str = malloc(totalSize + 1);

	if (!str)
		return (0);

	for (i = 0; i < s1Size; i++)
		str[i] = s1[i];

	for (i = 0; i < s2Size; i++)
		str[i + s1Size] = s2[i];

	str[totalSize] = 0;

	return (str);
}
