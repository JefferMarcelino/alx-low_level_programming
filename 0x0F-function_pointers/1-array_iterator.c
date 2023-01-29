#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: the given array
 * @size: the size of the array
 * @action: the pointer to the function you need to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
