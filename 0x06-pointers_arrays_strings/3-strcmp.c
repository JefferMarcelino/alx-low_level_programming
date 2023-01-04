#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the result of comparation
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
