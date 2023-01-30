#include <stdio.h>
#include <stdarg.h>

/**
 * _strlen - function that counts the chars from a string
 *
 * @str: the string
 * @i: the index to be analyzed
 *
 * Return: the length of the string
 */

int _strlen(const char * const str, int i)
{
	if (str[i] == 0)
		return (0);
	return (1 + _strlen(str, i + 1));
}

/**
 * print_all - function that prints anything
 *
 * @format: a list if types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, length = _strlen(format, 0);
	va_list args;
	char *str;

	va_start(args, format);

	while (i < length)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
			break;
		default:
			break;
		}

		if ((format[i] == 'c'
		    || format[i] == 'i'
		    || format[i] == 'f'
		    || format[i] == 's') && (i != (length - 1)))
		{
			printf(", ");
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
