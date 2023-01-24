#include <stdlib.h>

/**
 * _strlen - function that count the chars from a string
 *
 * @str: the string
 *
 * Return: the string length
 */

int _strlen(char *str)
{
	if (str == 0 || *str == 0)
		return (0);
	str++;
	return (1 + _strlen(str));
}

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes that should be consider on s2
 *
 * Return: the new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	if (num < 0)
		return (0);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == 0)
		return (0);

	for (i = 0; s1[i] != 0; i++)
		ptr[i] = s1[i];

	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = 0;

	return (ptr);
}
