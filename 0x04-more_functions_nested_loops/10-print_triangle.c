#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: the size of the triangle
 *Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	i = 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
