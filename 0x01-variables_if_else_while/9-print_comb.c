#include <stdio.h>
/**
  *main - entry point
  *Description: print lowercase alphabet
  *Return: always 0
  */
int main(void)
{
	int i = 0;

	while (i < 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar(i + '0');
	return (0);
}
