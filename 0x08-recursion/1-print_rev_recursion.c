#include "main.h"

/**
 *_print_rev_recursion - prints a string in reverse
 *@s: the string to be printed
 *Return: viod, it returns nothing
 */

void _print_rev_recursion(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	i--;
	if (i <= 0)
		return;
	_putchar(*(s + i));
	s[i] = '\0';
	_print_rev_recursion(s);
}
