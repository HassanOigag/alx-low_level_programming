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
 *str_concat - concatenate two strings
 *@s1: the first string
 *@s2: the second string
 *Return: returns the new string or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	int size;
	char *str;
	int i = 0;
	int j = 0;

	if (!s1)
		return (NULL);
	if (!s2)
		s2 = "";
	size = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = s2[j];
	return (str);
}

/**
 *argstostr - concatenates args into one string
 *@ac: the number of arguments
 *@av: the array of arguments
 *Return: returns the string with all args
 */

char *argstostr(int ac, char **av)
{
	char *str = "";
	char *word;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (*av)
	{
		word = str_concat(*av, "\n");
		str = str_concat(str, word);
		free(word);
		av++;
	}
	return (str);
}





