#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the size of various data types'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "Size of a";

	printf("%s char: %ld byte(s)\n", s, sizeof(char));
	printf("%s int: %ld byte(s)\n", s, sizeof(int));
	printf("%s long long int: %ld byte(s)\n", s, sizeof(long long int));
	printf("%s float: %ld byte(s)\n", s, sizeof(float));
	return (0);
}

