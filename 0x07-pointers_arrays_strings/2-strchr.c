#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: the string to search
 *@c: the character to locate
 *Return: returns a pointer to the first occurence or NULL  if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int size = 0;
	unsigned int i = 0;

	while (s[size])
		size++;
	while (i <= size)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
