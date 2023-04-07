#include "main.h"

/**
 *print_binary - print the binary of a decimal
 *@n: the decimal number
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 1 || n == 0)
		_putchar(n + '0');
	else
	{
		print_binary(n / 2);
		print_binary(n % 2);
	}
}
