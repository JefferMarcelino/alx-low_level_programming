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
	int i, j, k, square = 1;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - square; j++)
				_putchar(32);
			for (k = 0; k < square; k++)
				_putchar(35);
			square++;
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
