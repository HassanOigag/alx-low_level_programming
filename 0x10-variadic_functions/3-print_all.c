#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: a list of types of arguments passed to the function
 *@...: the arguments in hand
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *s;
	char *separator = "";

	va_start(ap, format);
	if (!format)
		return;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
