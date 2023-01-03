#include "main.h"

/**
 * puts2 - function that prints every other char of a string
 *
 * @str: the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != 0; str++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar(10);
}
