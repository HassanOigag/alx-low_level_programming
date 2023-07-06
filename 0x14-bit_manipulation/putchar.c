#include "main.h"

/**
 *_putchar - prints a character
 *@c: the character to be printed
 *Return: nothing
 */

void _putchar(int c)
{
	write(1, &c, 1);
}
