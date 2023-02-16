#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints a string the standard output using printf'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", msg);
	return (1);
}
