#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: a pointer to the memory block to fill
 *@b: the constant byte
 *@n: number of bytes  to fill
 *Return: returns a pointer to the memory areq
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
