#include "main.h"

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumOne = 0, sumSec = 0;

	for (i = 0; i < size; i++)
	{
		sumOne += *(a + (size * i + i));
		sumSec += *(a + (size * i + size - 1 - i));
	}

	printf("%d, %d\n", sumOne, sumSec);
}
