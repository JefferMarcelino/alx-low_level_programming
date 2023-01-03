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
	while (*(str += 2) != 0)
		_putchar(*str);
	_putchar(10);
}
