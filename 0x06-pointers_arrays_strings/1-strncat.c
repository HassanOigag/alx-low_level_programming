#include "main.h"

/**
 *_strncat - concatenates n characters from src into dest
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to concatenate
 *Return: returns the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

