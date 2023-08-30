#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: the pointer to the first char at the string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(--s));
	}
}
