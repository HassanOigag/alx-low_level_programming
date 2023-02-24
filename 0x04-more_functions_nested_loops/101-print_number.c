#include "main.h"

/**
 *print_number - print a number
 *@n: the number to be printed
 *Return: nothing
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else 
		num = n;
	if (num > 9)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else
		_putchar(num + '0');
}
