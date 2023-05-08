#include "main.h"

void error_log(char *file_from, char *file_to, int fd, int exit_code)
{
	if (exit_code == 97)
		dprintf(STDERR_FILENO ,"Usage: cp %s %s\n", file_from, file_to);
	else if (exit_code == 98)
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
	else if (exit_code == 99)
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
	else if (exit_code == 100)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
	exit(exit_code);
}

/**
 *main - the entry point
 *@argc: the number of argumets
 *@argv: the arguments
 *Return: 0 on success else non zero value on error
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int fd_from, fd_to;
	int	read_bytes = 1;
	int written_bytes = 1;
	char buffer[BUFFER_SIZE + 1];

	if (argc != 3)
		error_log("file_from", "file_to", 0, 97);
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_log(file_from, NULL, 0, 98);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_log(NULL, file_to, 0, 99);
	while (read_bytes > 0)
	{		
		read_bytes = read(fd_from, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
			error_log(file_from, NULL, 0, 98);
		buffer[read_bytes] = '\0';
		printf("buffer: %s\n", buffer);
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes < 0 || read_bytes != written_bytes)
			error_log(NULL, file_to, 0, 99);
	}
	if (close(fd_to) < 0)
		error_log(NULL, NULL, fd_to, 100);
	if (close(fd_from) < 0)
		error_log(NULL, NULL, fd_from, 100);
	return (0);
}