#include "main.h"

/**
 *puts_half - prints the last half of the string
 *@str: the string in question
 *Return: void nothing to return
 */

void puts_half(char *str)
{
	int i = 0;
	int middle;

	while (str[i])
		i++;
	middle = (i - 1) / 2;
	if (i % 2 == 0)
		middle++;
	while (str[middle])
	{
		_putchar(str[middle]);
		middle++;
	}
	_putchar('\n');
}
