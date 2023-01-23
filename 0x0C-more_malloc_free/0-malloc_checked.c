#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: the size in bytes
 *
 * Return: the pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
