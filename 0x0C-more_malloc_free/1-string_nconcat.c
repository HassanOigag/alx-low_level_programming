#include "main.h"

/**
 *_strlen - size of the string
 *@s: the string in hand
 *Return: the size of the string
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 *string_nconcat - concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: the number of bytes from s2 to concatenate
 *Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n >= _strlen(s2))
		size = _strlen(s1) + _strlen(s2) + 1;
	else
		size = _strlen(s1) + n + 1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
