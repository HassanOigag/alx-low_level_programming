#include <stdio.h>
#include <stdlib.h>

/**
 *is_valid_int - check if a string only contains numbers
 *@s: the string to check
 *Return: 0 if string has non digit characters else 1
 */

int is_valid_int(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/**
 *main - entry point
 *@argc: the number of arguments
 *@argv: array of strings
 *Return: 0 on success else 1
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		if (!is_valid_int(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
