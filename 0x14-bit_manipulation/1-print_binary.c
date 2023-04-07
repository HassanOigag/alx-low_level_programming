#include "main.h"

/**
 *print_binary - print the binary of a decimal
 *@n: the decimal number
 *Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i = 32;
	int start_print = 0;
	unsigned int bit;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		i = -1;
	}
	while (i >= 0)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			start_print = 1;
		if (start_print)
			_putchar(bit + '0');
		i--;
	}
}
