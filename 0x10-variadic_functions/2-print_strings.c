#include "variadic_functions.h"

/**
 *putstr - prints a string
 *@str: the string to be printed
 *Return: nothing
 */

void putstr(char *str)
{
	int i = 0;

	if (!str)
		str = "(nil)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 *print_strings - prints strings followed by a new line
 *@separator: the string to be printed between strings
 *@n: the number of strings to print
 *@...: the strigs to be printed
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		putstr(va_arg(ap, char *));
		if (separator && i < n - 1)
			putstr((char *) separator);
		i++;
	}
	putstr("\n");
	va_end(ap);
}
