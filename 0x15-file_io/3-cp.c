#include "main.h"

/**
 *error_log - prints the error to stderr and exits
 *@message: the message to print
 *@arg: additional argument
 *@disp: whether to display it or not
 *@exit_code: the exit code
 *Return: nothing
 */

void error_log(char *message, char *arg, int disp, int exit_code)
{
	if (disp && arg)
		dprintf(STDERR_FILENO, "%s %s\n", message, arg);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
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
	char *file_from;
	char *file_to;
	int	 fd_from;
	int  fd_to;
	int r, w;
	char buffer[1025];

	r = 1;
	w = 1;
	if (argc != 3)
		error_log("Usage: cp file_from file_to", NULL, 0, 97);
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
		error_log("Error: Can't read from file", file_from, 1, 98);
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC | O_APPEND, 0444);
	if (fd_to < 0)
		error_log("Error: Can't write file", file_to, 1, 99);
	while (r > 0)
	{
		r = read(fd_from, buffer, 1024);
		if (r < 0)
			error_log("Error: Can't read from file", file_from, 1, 98);
		buffer[r] = '\0';
		w = write(fd_to, buffer, r);
		if (w < 0)
			error_log("Error: Can't write file", file_to, 1, 99);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (100);
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (100);
	}
	return (0);
}
