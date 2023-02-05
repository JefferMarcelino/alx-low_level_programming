#include "main.h"
#define UN_L_INT_SIZE ((sizeof(unsigned long int) * (8)))

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 *
 * @n: the value
 * @index: the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == 0 || index > UN_L_INT_SIZE)
		return (-1);

	mask <<= index;

	if (((*n ^ mask) & *n) != *n)
		*n ^= mask;

	return (1);
}
