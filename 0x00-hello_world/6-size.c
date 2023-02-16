#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the size of various data types'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "Size of";

	printf("%s a char: %d byte(s)\n", s, sizeof(char));
	printf("%s an int: %d byte(s)\n", s, sizeof(int));
	printf("%s a long int: %d byte(s)\n", s, sizeof(long int));
	printf("%s a long long int: %d byte(s)\n", s, sizeof(long long int));
	printf("%s a float: %d byte(s)\n", s, sizeof(float));
	return (0);
}

