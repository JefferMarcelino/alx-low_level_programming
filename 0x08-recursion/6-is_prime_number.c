#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - function that check if a number is prime
 *
 * @n: the number
 *
 * Return: 1 if is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 1));
}

/**
 * is_prime - function that finds a disible number less than n
 *
 * @n: the number
 * @i: number to see if is divisible
 *
 * Return: returns 1 if finds a divisble number different from itselfs and 1
 *         and 0 if did not exist
 */

int is_prime(int n, int i)
{
	if (n % i == 0 && i != 1 && i != n)
		return (0);
	if (i > n)
		return (1);
	return (is_prime(n, i + 1));
}
