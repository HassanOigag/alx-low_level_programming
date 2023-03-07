#include "main.h"

/**
 *print_diagsums - prints the sum of the two diagonals of a matrix
 *@a: a pointer to the array
 *@size: the size of the array
 *Return: void, returns nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	while (i < size)
	{
		sum_diag1 += a[i];
		a += size;
		i++;
	}
	a -= size;
	i = 0;
	while (i < size)
	{
		sum_diag2 += a[i];
		a -= size;
		i++;
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
