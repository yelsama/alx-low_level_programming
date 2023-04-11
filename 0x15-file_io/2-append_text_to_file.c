#include "main.h"

/**
 * append_text_to_file - clear name
 * @filename: destination file name
 * @text_content: text to write into the file
 * Return: 1 on success -1 on falure
 */
int	append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	int	i, n;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 1)
		return (-1);
	i = 0;
	while (text_content[i])
		i++;
	n = write(fd, text_content, i);
	if (n < 1)
		return (close(fd), -1);
	return (close(fd), 1);
}
