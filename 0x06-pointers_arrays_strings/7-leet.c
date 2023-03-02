#include "main.h"

/**
 *get_code - gets the code of the letter
 *@c: the letter in hand
 *Return: the encoding
 */

int	get_code(int c)
{
	char *letters = "aAeEoOtTlL";
	char *codes = "4433007711";
	int i = 0;

	while (letters[i])
	{
		if (letters[i] == c)
			return (codes[i]);
		i++;
	}
	return (c);
}

/**
 *leet - encodes a string in 1337
 *@s: the string to encode
 *Return: returns the encoded string
 */

char	*leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		s[i] = get_code(s[i]);
		i++;
	}
	return (s);
}
