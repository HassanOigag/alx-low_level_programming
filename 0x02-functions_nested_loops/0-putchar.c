#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints a string'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char *str = "_putchar\n";

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
