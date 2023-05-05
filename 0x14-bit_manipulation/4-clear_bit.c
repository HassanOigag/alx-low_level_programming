#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0
 *@n: the address of the number in hand
 *@index: the index of the bit to set
 *Return: returns 1 on succes else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int not = ~(*n);

	if (index > 64)
		return (-1);
	not	|= 1 << index;
	*n = ~not;
	return (1);
}
