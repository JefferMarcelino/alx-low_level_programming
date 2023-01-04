#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes from src
 *
 * Return: resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	for (; *dest != 0; dest++)
		;

	for (i = 0; i < n && src[i] != 0; i++, dest++)
		*dest = src[i];

	*dest = 0;

	return (ptr);
}
