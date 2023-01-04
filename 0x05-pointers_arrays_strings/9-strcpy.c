#include "main.h"

/**
 * _strcpy - function that copies a string to a pointer
 *
 * @dest: the pointer that will contain the string
 * @src: the string
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = 0;

	return (ptr);
}
