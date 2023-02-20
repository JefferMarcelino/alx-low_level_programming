#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * _strlen - function that returns the length of a string
 *
 * @str: the string
 *
 * Return: the length
 */

int _strlen(char *str)
{
	if (str == 0 || *str == 0)
		return (0);
	str++;
	return (1 + _strlen(str));
}

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: the file's name
 * @text_content: the file's content
 *
 * Return: 1 if success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));

		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
