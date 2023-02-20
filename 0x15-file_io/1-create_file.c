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
 * create_file - a function that creates a file
 *
 * @filename: the filename's name
 * @text_content: the filename's content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));

		if (bytes_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
