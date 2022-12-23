#include "main.h"

/**
 * print_line - function that drwas a straight line
 *
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n && n != 0; i++)
		_putchar(95);
	_putchar(10);
}
