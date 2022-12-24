#include "main.h"

/**
 * print_triangule - function that prints a triangule
 *
 * @size: size of the triangule
 *
 * Return: void
 */

void print_triangule(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(32);
			for (j = 0; j <= i; j++)
				_putchar(35);
			ch++;
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
