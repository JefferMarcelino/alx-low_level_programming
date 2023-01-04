#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: the first string
 * @src: the second string
 *
 * Return: the result string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	for (; *dest != 0; dest++)
		;
	for (; *src != 0; src++, dest++)
		*dest = *src;

	*dest = 0;

	return (ptr);
}
