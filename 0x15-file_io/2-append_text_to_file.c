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

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_CREAT | O_APPEND | O_WRONLY, 0644);
}
