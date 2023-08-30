#include "main.h"

/**
 * _puts_recursion - a function that prints a string using recursion
 *
 * @s: the pointer to the first char on the string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (s == 0 || *s == 0)
		_putchar(10);
	else
		{
			_putchar(*s);
			s++;
			_puts_recursion(s);
		}
}
