#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the file's name
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: the number of arguments
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
