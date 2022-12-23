#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *                from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; i < 15; i++)
			_putchar(i + "0");
		_putchar("\n");
	}
}
