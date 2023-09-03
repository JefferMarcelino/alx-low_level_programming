#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * subChange - function to calc
 *
 * @changes: pointer to changes int value
 * @cents: pointer to cents int value
 * @valueToSub: value that must be subtracted
 *
 * Return: nothing
 */
void subChange(int *changes, int *cents, int valueToSub)
{
	*cents = *cents - valueToSub;
	*changes = *changes + 1;
}

/**
 * main - a program that prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: if success 0, otherwise 1
 */
int main(int argc, char *argv[])
{
	int changes = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("%d\n", changes);
	else
	{
		while (cents != 0)
		{
			if (cents >= 25)
				subChange(&changes, &cents, 25);
			else if (cents >= 10)
				subChange(&changes, &cents, 10);
			else if (cents >= 5)
				subChange(&changes, &cents, 5);
			else if (cents >= 2)
				subChange(&changes, &cents, 2);
			else if (cents >= 1)
				subChange(&changes, &cents, 1);
		}

		printf("%d\n", changes);
	}

	return (0);
}
