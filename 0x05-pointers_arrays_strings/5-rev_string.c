#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int pos = 0, size = 0;
	char *str = s;

	while (s[size] != 0)
		size++;

	for (size = size - 1; size >= 0; --size, ++pos)
	{
		*(s + pos) = str[size];
	}
}
