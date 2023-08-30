#include "main.h"

/**
 * repeated_sub_method - the method used to calculate the square root
 *
 * @n: given number
 * @x: odd number to subtract
 *
 * Return: the square root, otherwise -1
 */
int repeated_sub_method(int n, int x)
{
	if (n == 0)
		return (0);

	if (n < 0)
		return (-1);

	n = n - x;
	return (1 + repeated_sub_method(n, x + 2));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: the given number
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	int sqrt = repeated_sub_method(n, 1);

	if (sqrt * sqrt == n)
		return (sqrt);

	return (-1);
}
