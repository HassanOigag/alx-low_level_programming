#include "main.h"

/**
 *_strdup - create a dynamic copy of a string
 *@str: the string to copy
 *Return: a pointer to the created string
 */

char	*_strdup(char *str)
{
	int i = 0;
	char *new;
	int j = 0;

	if (!str)
		return (NULL);
	while (str[j])
		j++;
	new = malloc(sizeof(char) * (j + 1));
	if (!new)
		return (NULL);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = str[i];
	return (new);
}
