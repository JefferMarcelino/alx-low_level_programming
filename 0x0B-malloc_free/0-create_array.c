#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes
 *                it with a specific char.
 *
 * @size: the size of array
 * @c: the char used to fill the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size != 0)
	{
		ptr = malloc(size);

		if (ptr == 0)
			return (0);

		for (i = 0; i < size; i++)
			ptr[i] = c;

		return (ptr);
	}

	return (0);
}
