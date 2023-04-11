#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * print_read_error - check the code
 * @arg: argument to print
 * Return: 98
 */
int	print_read_error(char *arg)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	return (98);
}

/**
 * clear_buffer - check the code
 * @buf: numbe of arguments passed
 * Return: Nothing
 */
void	clear_buffer(char *buf)
{
	int	i = -1;

	while (++i < 1024)
		buf[i] = 0;
}

/**
 * main - check the code
 * @argc: numbe of arguments passed
 * @argv: arguments strings
 * Return: 0 on total success
 */
int	main(int argc, char **argv)
{
	int		src_fd, dst_fd, i, red;
	char	buf[1024];
	int		close_flag;

	if (argc != 3)
		return (write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28), 97);
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd < 1)
		return (print_read_error(argv[1]));
	dst_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dst_fd < 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (close(src_fd), 99);
	}
	clear_buffer(buf);
	red = read(src_fd, buf, 1024);
	while (red > 0)
	{
		i = write(dst_fd, buf, red);
		if (i != red)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (close(src_fd), close(dst_fd), 99);
		}
		clear_buffer(buf);
		if (red < 1024)
			break;
		red = read(src_fd, buf, 1024);
	}
	if (red < 0)
		print_read_error(argv[1]);
	close_flag = close(src_fd);
	if (close_flag < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
	if (close(dst_fd) < 0)
		return (dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst_fd), 100);
	return (close_flag);
}
