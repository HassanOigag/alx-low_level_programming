#include "main.h"

/**
 *print_rev - print a string in reverse
 *@s: the string to print in reverse
 *Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
