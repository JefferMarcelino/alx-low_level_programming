#include "main.h"

/**
 * _puts - function that prints a string, with a new line
 *
 * @str: the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != 0)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
