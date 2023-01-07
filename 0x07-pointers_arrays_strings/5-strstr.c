#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: the string
 * @needle: the substring
 *
 * Return: pointer to the beginning of the located substring, or NULL
 *         is the string is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int isFound = 0;
	char *strBeginning;

	for (; *haystack != 0; haystack++)
	{
		if (*haystack == needle[0])
		{
			strBeginning = haystack;
			i = 0;
			while (needle[i] != 0)
			{
				if (*haystack == needle[i])
					isFound = 1;
				else
				{
					isFound = 0;
					break;
				}

				i++;
				haystack++;
			}

			if (isFound)
				return (strBeginning);
		}
	}

	return (0);
}
