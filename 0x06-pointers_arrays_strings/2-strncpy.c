#include "main.h"

/**
 * _strncpy - function that copies a string.
 *            This function should work exactly like strncpy
 *
 * @dest: the first string
 * @src: the second string
 * @n: number of chars
 *
 * Return: the pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (ptr);
}
