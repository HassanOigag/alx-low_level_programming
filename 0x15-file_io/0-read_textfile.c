#include "main.h"

/**
 *read_textfile - reads a text file and prints to the posix output
 *@filename: the name of the file to read
 *@letters: the number of letters to read
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[letters + 1];
	ssize_t	r;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	buffer[letters] = '\0';
	if (write(STDOUT_FILENO, buffer, r) == -1)
		return (0);
	return (r);
}
