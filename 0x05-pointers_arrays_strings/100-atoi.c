#include "main.h"

/**
 *_atoi - converts a string to an int
 *@s: the string to convert
 *Return: returns an int
 */

int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while (s[i] && (s[i] == 32 || (s[i] >= 9 && s[i] <= 13)))
		i++;
	while (s[i] && (s[i] == '+' || s[i] == '-'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res =  res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
