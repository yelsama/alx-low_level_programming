#include "main.h"

/**
 * _strlen - fins length of string
 * @s: a pointer to string
 * Return: string length
 */
int	_strlen(char *s)
{
	int	l;

	if (!s)
		return (0);
	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}

/**
 * create_file - creates a file with specified content
 * @filename: the name of the file to create
 * @text_content: a NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int	create_file(const char *filename, char *text_content)
{
	int		fd;
	ssize_t	bytes_written;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd < 1)
		return (-1);
	if (text_content)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written < 1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
