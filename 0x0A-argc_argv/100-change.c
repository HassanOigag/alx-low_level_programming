#include <stdio.h>
#include <stdlib.h>


/**
 *max - get the max and not to exceed the wanted amount
 *@coins: integer array containing the coins in hand
 *@wanted: the wanted max
 *Return: return the maximum
 */

int max(int *coins, int wanted)
{
	int i = 0;
	int m = 0;

	while (i < 5)
	{
		if (coins[i] >= m && coins[i] <= wanted)
			m = coins[i];
		i++;
	}
	return (m);
}

/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array of strings
 *Return: 0 on success otherwise 1
 */

int main(int argc, char **argv)
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents)
	{
		cents -= max(coins, cents);
		change++;
	}
	printf("%d\n", change);
	return (0);
}
