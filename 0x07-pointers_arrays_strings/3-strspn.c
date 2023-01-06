#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the string that will be analyzed
 * @accept: the character used to search
 *
 * Return: number of bytes in the initial segment of s which consist
 *         only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; s[i] != 0 && s[i] != 32; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}

	return (n);
}
