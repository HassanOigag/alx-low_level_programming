#include "main.h"

/**
 *_strlen - calculates the size of the string
 *@s: the string in hand
 *Return: the number of chars in the string
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 *argstostr - concatenates args into one string
 *@ac: the number of arguments
 *@av: the array of arguments
 *Return: returns the string with all args
 */

char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int	 size = ac + 1;
	int	i = 0;
	int j = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		size += _strlen(av[i]);
		i++;
	}
	i = 0;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (av[k])
	{
		j = 0;
		while (av[k][j])
		{
			if (k == 0)
				str[j] = av[k][j];
			else
				str[i + j] = av[k][j];
			j++;
		}
		if (k == 0)
			str[j] = '\n';
		else
			str[i + j] = '\n';
		i = i + j + 1;
		k++;
	}
	str[i] = '\0';
	return (str);
}
