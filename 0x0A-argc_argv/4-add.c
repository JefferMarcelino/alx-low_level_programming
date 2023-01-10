#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: the number of arguments
 * @argv: the argument's array
 *
 * Return: 0 (success) or -1 (failed)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] >= 48 && argv[i][0] <= 57)
		{
			sum += atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (-1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
