#include "main.h"

/**
 *is_separator - checks if a character is a separator
 *@c: the character to check
 *Return: 1 if true otherwise returns 0
 */

int is_separator(int c)
{
	return (c == 32 || c == '\n' || c == ',' || c == ';' || c == '!'
			|| c == '?' || c == '"' || c == '(' || c == ')'
			|| c == '{' || c == '}' || c == '\t' || c == '.');
}

/**
 *is_lower - checks if a character is lower case
 *@c: the character in hand
 *Return: 1 if true else 0
 */

int	is_lower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 *cap_string - capitalizes all words of the string
 *@s: the string to capitalize
 *Return: return the capitalized string
 */


char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (is_separator(s[i]) && s[i + 1] && is_lower(s[i + 1]))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}
