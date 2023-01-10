#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it.
 *
 * @argc: the number of arguments
 * @argv: the arguments array
 *
 * Return: always return 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
