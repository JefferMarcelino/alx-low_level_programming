#include "main.h"

/**
 * puts_half - function that prints the second half of the string
 *
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n, length;

	for (length = 0; str[length] != 0; length++)
		;

	if (n % 2 != 0)
		n = (length - 1) / 2;
	else
		n = length / 2;

	for ( ; str[n] != 0; n++)
		_putchar(str[n]);
}
