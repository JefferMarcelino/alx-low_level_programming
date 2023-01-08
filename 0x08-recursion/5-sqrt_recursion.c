#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square
 *                   root of a number.
 *
 * @n: the number
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function that calcs the square root of n
 *
 * @n: the number
 * @i: the possible root
 *
 * Return: the square of a number, or -1 if does not have
 */

int _sqrt(int n, int i)
{
	if ((i * i) > n || n < 0)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}
