#include "main.h"
/**
*print_to_98 - print numbers start from n to 98
*@n: the number to start from
*Return: returns nothing, (void).
*/
void print_to_98(int n)
{
	while (n < 99)
	{
		if (n != 98)
			printf("%d, ", n);
		if (n == 98)
			printf("%d", n);
		n++;
	}
	printf("\n");
}
