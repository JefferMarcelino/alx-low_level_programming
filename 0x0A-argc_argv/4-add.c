#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that adds positive numbers
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: if success 0, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
