#include "main.h"

/**
 *print_array - print an array of ints
 *@a: pointer to the first int of the array
 *@n: the size of the array
 *Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
		return;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
