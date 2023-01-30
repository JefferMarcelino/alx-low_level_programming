#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - print an integer
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print a float
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */


void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - print a string
 *
 * @arg: a list of argument pointing
 *      to the character to be printed
 *
 * Return: nothing
 */

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == 0)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
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
	int i, j;
	va_list args;
	func_to_print funcs_print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	char *separator = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (*(funcs_print[j].symbol) != format[i]))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs_print[j].func(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
