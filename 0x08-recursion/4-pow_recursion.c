#include "main.h"

/**
 *_pow_recursion - claculate the value of x raised to y
 *@x: the base
 *@y: the power
 *Return: returns x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
