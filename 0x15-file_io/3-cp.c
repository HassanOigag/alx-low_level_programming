#include "main.h"

/**
 *main - the entry point
 *@argc: the number of argumets
 *@argv: the arguments
 *Return: 0 on success else non zero value on error
 */

int main(int argc, char *argv[])
{
	int fd_read, fd_write, x, m, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fd_read, buf, BUFSIZ)) > 0)
	{
		if (fd_write < 0 || write(fd_write, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_read);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(fd_read);
	n = close(fd_write);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}