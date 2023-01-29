#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 *
 * @s: the operator typed by the user
 *
 * Return: the function to perfom the operation
 */

int (*get_op_func(char *s))(int, int)
{
	char *ops[] = { "+", "-", "*", "/", "%" };
	int (*funcs[])(int, int) = { op_add, op_sub, op_mul, op_div, op_mod };
	int i = 0;

	while (i < 5)
	{
		if (*s == *(ops[i]))
			return (funcs[i]);
		i++;
	}

	return (0);
}
