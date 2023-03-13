#include "main.h"

/**
 *create_array -  creates an array of chars
 *@size: the size of the array to create
 *@c: init character
 *Return: returns a pointer to an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
