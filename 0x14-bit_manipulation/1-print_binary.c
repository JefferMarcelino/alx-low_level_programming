#include <stdio.h>
#include "main.h"

/**
 * _length - find the length of @n
 *
 * @n: value to find its length
 *
 * Return: length
 */
int _length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{
		length++;
		n >>= 1;
	}

	length--;

	return (length);
}

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: the number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int length = _length(n);
	unsigned long int mask = 1;

	if (length > 0)
		mask <<= length;

	while (mask > 0)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}
