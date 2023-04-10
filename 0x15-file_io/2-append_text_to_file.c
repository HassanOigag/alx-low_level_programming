#include "main.h"

/**
 *append_text_to_file - appends text at the end of file
 *@filename: the file in hand
 *@text_content: the text to add at the end of the file
 *Return: 1 on success else -1 is returned
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int slen;

	slen = 0;
	w = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[slen])
			slen++;
		w = write(fd, text_content, slen);
		if (w < 0 || slen != w)
			return (-1);
	}
	close(fd);
	return (1);
}
