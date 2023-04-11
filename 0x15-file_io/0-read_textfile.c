#include "main.h"

/**
 * read_textfile - reads from given file
 * @filename: file name
 * @letters: numbe of letters to read and print
 * Return: number of letter could read and print
 */
ssize_t	read_textfile(const char *filename, size_t letters)
{
	int		fd;
	char	*bufr;
	int		i;
	ssize_t	n;

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 1)
		return (0);
	i = -1;
	bufr = malloc(sizeof(char) * letters);
	if (!bufr)
		return (close(fd), 0);
	while (++i < (int)letters)
		bufr[i] = 0;
	n = read(fd, bufr, letters);
	close(fd);
	if (n < 1)
		return (free(bufr), 0);
	n = write(1, bufr, n);
	return (free(bufr), n);
}

