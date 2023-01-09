#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: the string
 * @c: the character to be searched
 *
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	for (; *s != 0; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);

	return (0);
}
