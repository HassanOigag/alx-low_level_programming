#include "main.h"
/**
 *base_two_power - calculates two to the power of n
 *@n: the power
 *Return: two to the power of n
 */

unsigned int base_two_power(unsigned int n)
{
	unsigned int i = 0;
	unsigned int res = 1;

	while (i < n)
	{
		res *= 2;
		i++;
	}
	return (res);
}

/**
 *binary_to_uint - converts binary number to unsigned int
 *@b: the binary to convert
 *Return: the decimal representation of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int decimal = 0;
	unsigned int j = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--;
	while (b[j])
	{
		decimal += base_two_power(i) * (b[j] - '0');
		i--;
		j++;
	}
	return (decimal);
}


