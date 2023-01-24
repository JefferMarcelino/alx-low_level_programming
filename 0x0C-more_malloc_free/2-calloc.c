#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: the size of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (0);

	array = malloc(nmemb * size);

	if (array == 0)
		return (0);

	return (array);
}
