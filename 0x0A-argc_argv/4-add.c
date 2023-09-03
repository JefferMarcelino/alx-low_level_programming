#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * isNum - function that cheks if a string is has valid
 * digits
 *
 * @num: the char requence (string)
 *
 * Return: if success 0, otherwise 1
 */
int isNum(char num[])
{
	int i, len = strlen(num);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}

	return (0);
}

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
			if (isNum(argv[i]) == 1)
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
