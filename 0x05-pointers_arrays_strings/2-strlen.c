#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: the string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != 0)
		n++;

	return (n);
}
