#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: the number of arguments
 *@argv: an array of strings
 *Return: 0 on success otherwise 1
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
