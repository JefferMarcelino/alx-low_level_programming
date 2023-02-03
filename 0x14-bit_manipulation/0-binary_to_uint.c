#include <stdio.h>
#include "main.h"

/**
 * _pow - function that pows a number
 *
 * @n: the number
 * @times: the power
 *
 * Return: the number powered
 */

int _pow(int n, int times)
{
	if (times == 0)
		return (1);
	if (times == 1)
		return (n);

	return ((n * _pow(n, (times - 1))));
}

/**
 * _strlen - function that counts the char from a string
 *
 * @str: the string
 *
 * Return: the length of the string
 */

int _strlen(const char *str)
{
	int i;

	if (str && *str == 0)
		return (0);

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: the binary number
 *
 * Return: the converted number, or 0 if it failed
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int n = 0;

	if (b == 0)
		return (0);

	i = _strlen(b) - 1;

	for (j = 0; b[i] != 0 && i >= 0; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n += ((int)b[i] - 48) * _pow(2, j);
	}

	return (n);
}
