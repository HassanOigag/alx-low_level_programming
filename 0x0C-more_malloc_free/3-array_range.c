#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: starting point
 *@max: stopping point
 *Return: return the address of the created array
 */

int *array_range(int min, int max)
{
	int size;
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
