#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 *
 * @c: input to be checked
 *
 * Return: returns 1 if is a digit
 *         otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
