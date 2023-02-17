#include <stdio.h>
/**
  *main - entry point
  *Description: print lowercase alphabet in reverse
  *Return: always 0
  */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
