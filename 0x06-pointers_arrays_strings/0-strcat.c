#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *Return: returns a string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
