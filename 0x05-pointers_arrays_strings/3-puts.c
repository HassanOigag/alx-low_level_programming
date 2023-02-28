#include "main.h"

/**
 *_puts - prints a string followed by new line
 *@str: the string to print
 *Return: void, return nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
