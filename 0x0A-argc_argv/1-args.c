#include <stdio.h>

/**
 *main - entry point
 *@argc: the number of arguments
 *@argv: an array of strings
 *Return: 0 on success
 */

int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
