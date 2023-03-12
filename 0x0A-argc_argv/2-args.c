#include <stdio.h>

/**
 *main - entry point
 *@argc: the number of arguments
 *@argv: an array of strings
 *Return: 0 on success
 */

int main(int __attribute__ ((unused)) argc, char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
