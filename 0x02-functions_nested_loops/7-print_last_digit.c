#include "main.h"
/**
*print_last_digit - gets the last digit of a number
*@n: the number in question
*Return: return the last digit of a number
*/
int	print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar(n % 10 + '0');
	return (n % 10);
}
