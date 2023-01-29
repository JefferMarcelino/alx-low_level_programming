#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry function
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (!func || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%')
	    && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
