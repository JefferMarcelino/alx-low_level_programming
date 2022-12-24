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
	int i, j, ch;

	if (size > 0)
	{
		ch = 1;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - ch; j++)
				_putchar(32);
			for (j = 0; j < ch; j++)
				_putchar(35);
			ch++;
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
