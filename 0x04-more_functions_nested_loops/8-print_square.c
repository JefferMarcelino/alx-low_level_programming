#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: is the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
