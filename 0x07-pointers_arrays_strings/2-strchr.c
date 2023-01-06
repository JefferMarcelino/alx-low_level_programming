#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string
 * @c: the character to be searched
 *
 * Return: the pointer to the first occurrence (success)
 *         NULL (not found)
 */

char *_strchr(char *s, char c)
{
	for (; *s != 0; s++)
	{
		if (*s == c)
			return (s);
	}

	return (NULL);
}
