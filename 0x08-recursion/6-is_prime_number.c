#include "main.h"

/**
 *is_prime - checks if a number is prime
 *@n: the number to check
 *@start: where to start checking
 *Return: 1 if its a prime else 0
 */

int is_prime(int n, int start)
{
	if (start >= n / 2)
		return (1);
	if (n % start)
		return (is_prime(n, start + 1));
	return (0);
}

/**
 *is_prime_number - check if a number is prime
 *@n: the number in hand
 *Return: 1 if number is prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, 2));
}
