#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a new line
 *@separator: the string to be printed between numbers
 *@n: number of integers
 *@...: the actual numbers
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
