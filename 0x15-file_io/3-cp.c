#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_SIZE 1024

/**
 * __exit - prints error messages and exits with exit number
 *
 * @error_code: either the exit number
 * @str: name of either file_from or file_to
 * @fd: file descriptor
 *
 * Return: 0 on success
 */

int __exit(int error_code, char *str, int fd)
{
	switch (error_code)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	default:
		return (0);
	}
}

/**
 * main - create a copy of file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success.
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	int read_status, write_status;
	char buffer[MAX_SIZE];

	if (argc != 3)
		__exit(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		__exit(98, argv[1], 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		__exit(99, argv[2], 0);

	while ((read_status = read(file_from, buffer, MAX_SIZE)) != 0)
	{
		if (read_status == -1)
			__exit(98, argv[1], 0);

		write_status = write(file_to, buffer, read_status);

		if (write_status == -1)
			__exit(99, argv[2], 0);
	}

	if (close(file_from) == -1)
		__exit(100, NULL, file_from);

	if (close(file_to) == -1)
		__exit(100, NULL, file_to);

	return (0);
}
