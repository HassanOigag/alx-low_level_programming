#include "main.h"

/**
 *_strlen - counts the size of a string
 *@s: the string in question
 *Return: returns the size of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
