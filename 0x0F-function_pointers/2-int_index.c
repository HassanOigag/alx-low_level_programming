#include "function_pointers.h"

/**
 *int_index - searches for an integer in an array
 *@array: the array to be searched
 *@size: the size of the array
 *@cmp: the comparison function
 *Return: returns the index of the element if found else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
