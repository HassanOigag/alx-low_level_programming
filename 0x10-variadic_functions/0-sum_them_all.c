#include "variadic_functions.h"

/**
 *sum_them_all - calculates the sum of all parameters
 *@n: the number of arguments
 *@...: infinite number of arguments
 *Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
