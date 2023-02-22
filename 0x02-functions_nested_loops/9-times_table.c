#include "main.h"
/**
*times_table - prints the times table
*Return: nothing (void)
*/
void times_table(void)
{
	int i = 0;
	int j = 0;
	int m = 0;
	while(i < 10)
	{
		j = 0;
		while (j < 10)
		{
			m = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (m <= 9)
					_putchar(' ');
			}
			if (m >= 0 && m < 10) 
				_putchar(m + '0');
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}	
}
