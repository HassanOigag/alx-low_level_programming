#include "main.h"

/**
 *_puts_recursion - prints a string recursivly
 *@s: the string to print
 *Return: returns nothing its void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
