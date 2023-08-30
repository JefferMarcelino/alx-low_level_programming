#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: the pointer to the first char at the string
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (s == 0 || *s == 0)
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
