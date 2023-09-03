#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the file's name
 *
 * @argc - the number of arguments
 * @argv - the array of arguments
 *
 * Return: the number of arguments
 */
int main(int argc, char **argv)
{
	printf("%s\n", *argv);

	return argc;
}
