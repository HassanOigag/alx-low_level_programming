#include <stdio.h>
/**
  *main - entry point
  *Description: print lowercase alphabet
  *Return: always 0
  */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
