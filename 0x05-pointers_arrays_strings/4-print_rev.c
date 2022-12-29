#include "main.h"

/**
 * print_rev - function that prints a string a reverse order
 *
 * @s: the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int size;

	size = 0;

	while (s[size] != 0)
		size++;

	for (size = size - 1; size >= 0; size--)
		_putchar(s[size]);
}
