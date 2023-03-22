#include "3-calc.h"

/**
 *error - prints an error and exits
 *@code: exit code associated with the error
 *Return: nothing
 */

void error(int code)
{
	printf("Error\n");
	exit(code);
}

/**
 *main - entry point of the program
 *@argc: the number of arguments
 *@argv: array of arguments passed in the command line
 *Return: 0 on success, non zero value on error
 */

int main(int argc, char **argv)
{
	int a, b;
	char *op;
	int (*operation)(int, int);

	if (argc != 4)
		error(98);
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	operation = get_op_func(op);
	if (!operation)
		error(99);
	printf("%d\n", operation(a, b));
	return (0);
}
