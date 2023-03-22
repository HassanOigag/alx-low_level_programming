#include "function_pointers.h"

/**
 *array_iterator - executes a function on each array element
 *@size: the size of the array
 *@action: the fuction to be executed on each array element
 *Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
