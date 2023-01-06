#include "main.h"

/**
 * leet - function that encodes a string into leet (1337)
 *
 * @s: the string
 *
 * Return: the pointer to string s
 */

char *leet(char *s)
{
	int i, j;
	int uppercase[] = {65, 69, 79, 84, 76};
	int lowercase[] = {97, 101, 111, 116, 108};
	int replaceTo[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == uppercase[j]) || (s[i] == lowercase[j]))
				s[i] = replaceTo[j];
		}
	}

	return (s);
}
