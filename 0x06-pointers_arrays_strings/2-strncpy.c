#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: destination string
 *@src: source string
 *@n: bytes to copy
 *Return: returns a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int slen = 0;

	while (src[slen])
		slen++;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (slen < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
