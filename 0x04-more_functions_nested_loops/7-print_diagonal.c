#include "main.h"

/**
 * print_diagonal - function that drwas a diagonal line
 *                  on the terminal
 *
 * @n: number of time the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(32);
			_putchar(92);
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
