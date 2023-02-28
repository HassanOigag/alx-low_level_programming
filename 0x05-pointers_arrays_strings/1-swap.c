#include "main.h"

/**
 *swap_int - swaps two variable values
 *@a: variable one
 *@b: variable two
 *Return: nothing void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
