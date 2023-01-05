#include "main.h"

/**
 * reverse_array - function that reverses the contebt of an array
 *                 of integers.
 *
 * @a: the array
 * @n: the number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, num;

	for (i = 0; i < n; i++, n--)
	{
		num = a[n - 1];
		a[n - 1] = a[i];
		a[i] = num;
	}
}
