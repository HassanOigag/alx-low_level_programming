#include "main.h"

/**
 *set_bit - sets the value of a bit to 1
 *@n: the adress of the number
 *@index: the index of the bit to set
 *Return: return 1 on success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= 1 << index;
	return (1);
}
