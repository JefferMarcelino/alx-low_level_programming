#include "main.h"

/**
 * _strpbrk - function that searchs a string for any of a set of bytes
 *
 * @s: the string
 * @accept: the pattern
 *
 * Return: the pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != 0; s++)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}

	if (*s == *accept)
		return (s);

	return (0);
}
