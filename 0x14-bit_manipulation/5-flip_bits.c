#include "main.h"

/**
 *flip_bits - returns the number of bits to flip in n to get the m
 *@n: the number n
 *@m: the number m
 *Return: return the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int res = n ^ m;
	int i = 63;
	int bit;

	while (i >= 0)
	{
		bit = (res >> i) & 1;
		if (bit)
			counter++;
		i--;
	}
	return (counter);
}
