#include <stdio.h>

/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: an array of strings
 *Return: 0 on success
 */

int main(int __attribute__ ((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
