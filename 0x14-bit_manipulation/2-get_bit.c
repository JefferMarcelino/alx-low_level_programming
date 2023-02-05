#include "main.h"
#define INT_BITS (sizeof(unsigned long int) * 8)

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: the value
 * @index: the index
 *
 * Return: the bit at a @index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > INT_BITS)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
