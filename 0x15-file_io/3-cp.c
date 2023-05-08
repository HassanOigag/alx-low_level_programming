#include "main.h"

/**
 *@file_from: name of the input file
 *@file_to: name of the output file
 *@fd: file descriptor
 *@exit_code: the exit code
 *Return: nothing
*/
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

int main(int argc, char *argv[])
{
	int bytes_read;
	int fd_from, fd_to;
	char *file_from, *file_to;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_log("file_from", "file_to", 0, 97);
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
		error_log(file_from, NULL, 0, 98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			exit(99);
		}
	}
	if (bytes_read < 0)
		error_log(file_from, NULL, 0, 98);
	if (close(fd_from) < 0)
		error_log(NULL, NULL, fd_from, 100);
	if (close(fd_to) < 0)
		error_log(NULL, NULL, fd_to, 100);
	return (0);
}