#include <stdlib.h>

/**
 * _strlen - function that count the chars from a string
 *
 * @str: the string
 *
 * Return: the string length
 */

unsigned int _strlen(char *str)
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
	char *newStr;
	int i, totalSize;

	if (n < 0)
		return (0);

	if (n >= _strlen(s2))
		totalSize = _strlen(s1) + _strlen(s2);
	else
		totalSize = _strlen(s1) + n;

	newStr = malloc(sizeof(*newStr) + (totalSize + 1));

	if (newStr == 0)
		return (0);

	for (i = 0; i < _strlen(s1); i++)
		newStr[i] = s1[i];

	for (i = 0; i < n && s2[i] != 0; i++)
		newStr[_strlen(s1) + i] = s2[i];

	newStr[totalSize] = 0;

	return (newStr);
}
