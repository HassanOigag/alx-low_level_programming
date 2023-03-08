#include "main.h"

/**
 *_strlen_recursion - calculates the size of the string
 *@s: the string in hand
 *Return: returns the length of the string
 */

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
