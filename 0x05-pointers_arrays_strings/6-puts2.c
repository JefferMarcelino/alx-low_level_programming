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
	for ( ; *str != "\n"; str+=2)
		_putchar(*str);
	_putchar(10);
}
