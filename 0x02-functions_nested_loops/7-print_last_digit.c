#include "main.h"
/**
*print_last_digit - gets the last digit of a number
*@n: the number in question
*Return: return the last digit of a number
*/
int	print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last % 10);
}
