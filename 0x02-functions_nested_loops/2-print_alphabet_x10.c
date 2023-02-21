#include "main.h"
/**
*print_alphabet_x10 - prints the  alphabet 10 times
*Return: void (returns nothing)
*/


void print_alphabet_x10(void)
{
	int i = 1;
	int c = 'a';

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
