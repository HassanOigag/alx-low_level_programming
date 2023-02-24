#include "main.h"

/**
 *print_number - print a number
 *@n: the number to be printed
 *Return: nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
		_putchar(n + '0');
}
