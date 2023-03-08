#include "main.h"

/**
 *factorial - calculate the factorial of a given number
 *@n: the number in hand
 *Return: return the factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
