#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 *
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(buffer) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, (sizeof(char) * letters));

	if (bytes_read == -1)
		return (0);

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
		return (0);

	free(buffer);

	close(fd);

	return (bytes_read);
}
