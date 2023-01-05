#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a
 *                  string to uppercase
 *
 * @s: the string
 *
 * Return: the pointer to s
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	for (; *s != 0; s++)
	{
		if (*s >= 97 && *s <= 122)
			*s = *s - 32;
	}

	return (ptr);
}
