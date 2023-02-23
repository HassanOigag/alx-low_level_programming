#include "main.h"

/**
 *print_line - prints a line using -
 *@n: the size of the line
 *Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
