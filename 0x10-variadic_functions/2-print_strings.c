#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *sprt = separator ? separator : "";
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (!str)
			str = "(nil)";

		if (i == (n - 1))
			printf("%s", str);
		else
			printf("%s%s", str, sprt);
	}

	va_end(args);
	printf("\n");
}
