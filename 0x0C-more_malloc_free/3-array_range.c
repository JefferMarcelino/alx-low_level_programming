#include <stdlib.h>

/**
 * array_range - function that created an array of integers
 *
 * @min: the min value in the array
 * @max: the max value in the array
 *
 * Return: the pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i = 0, range, *array;

	if (min > max)
		return (0);

	range = (max - min) + 1;

	array = malloc(range * sizeof(*array));

	if (array == 0)
		return (0);

	for (i = 0; i < range; i++)
		array[i] = min + i;

	return (array);
}
