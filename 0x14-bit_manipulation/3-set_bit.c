#include <stdio.h>
#include "main.h"
#define UN_L_INT_SIZE ((sizeof(unsigned long int)) * (8))

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: the value
 * @index: the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index > UN_L_INT_SIZE)
		return (-1);

	mask = 1 << index;
	*n |= mask;

	return (1);
}
