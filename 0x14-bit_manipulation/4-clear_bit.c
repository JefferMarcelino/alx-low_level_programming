#include "main.h"
#define UN_L_INT_SIZE ((sizeof(unsigned long int) * (8)))

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
