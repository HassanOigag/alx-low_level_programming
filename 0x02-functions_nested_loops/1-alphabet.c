#include "main.h"
/**
*print_alphabet - prints alphabet
*Return: void.
*/


void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
