#include "main.h"

/**
 * is_prime_number - a function that checks if a number
 * is prime or not
 *
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime(n, 1));
}

/**
 * is_prime - a function that calculates if a number is prime
 *
 * @n: the given number
 * @y: the calc number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime(int n, int y)
{
	if (n % y == 0 && y != 1 && y != n)
		return (0);

	if (y > n)
		return (1);

	return (is_prime(n, y + 1));
}
