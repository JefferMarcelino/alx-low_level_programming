#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), (separator ? separator : ""));
	}

	printf("\n");
}
