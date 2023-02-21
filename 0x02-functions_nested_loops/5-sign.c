#include "main.h"
/**
*print_sign - prints the sign of a number
*@n: the number to be checked
*Return: returns 1 if positive, -1 if negative and 0 if its zero
*/
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	else
	{
		_putchar('0');
		r = 0;
	}
	return (r);
}
