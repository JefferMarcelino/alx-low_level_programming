#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: the memory area that will receive the src bytes
 * @src: the memory area to be copy
 * @n: the number of bytes to be copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
