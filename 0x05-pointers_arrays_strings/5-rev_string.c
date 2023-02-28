#include "main.h"

/**
 *rev_string - reverses a string (modifies the string in hand)
 *@s: the holy string :)
 *Return: void return nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[j])
		j++;
	j--;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
