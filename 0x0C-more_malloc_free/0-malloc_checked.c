#include "main.h"

/**
 *malloc_checked - allocates memory
 *@b: number of bytes to allocate
 *Return: the address of the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (!memory)
		exit(98);
	return (memory);
}
