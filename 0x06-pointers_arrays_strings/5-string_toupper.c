#include "main.h"

/**
 *string_toupper - change lowercase to uppercase
 *@s: the string in hand
 *Return: return the uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
