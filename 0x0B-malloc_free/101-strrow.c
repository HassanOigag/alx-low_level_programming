#include "main.h"
#include <string.h>

/**
 *count_words - counts the words of a string
 *@s: the string in hand
 *Return: the number of words
 */

int	count_words(char *s)
{
	int slen = 0;
	int i = 0;
	int counter = 0;
	int found = 0;

	while (s[slen])
		slen++;
	while (i <= slen)
	{
		if (s[i] != ' ' && !found)
			found = 1;
		else if ((s[i] == ' ' || !s[i]) && found)
		{
			found = 0;
			counter++;
		}
		i++;
	}
	return (counter);
}

/**
 *get_first_word - gets the first word of a string
 *@s: the string in hand
 *Return: the first word
 */

char *get_first_word(char *s)
{
	int size = 0;
	int i = 0;
	char *word;

	while (s[size] && s[size] != ' ')
		size++;
	word = malloc(sizeof(char) * (size + 1));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != 32)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/**
 * strtow - string to words
 *@str: the string in hand
 *Return: a an array of words in the string
 */

char **strtow(char *str)
{
	int count = 0;
	int size = count_words(str) + 1;
	char *word;
	char **words;

	if (!str || !str[0])
		return (NULL);
	words = (char **) malloc(sizeof(char *) * size);
	if (!words)
		return (NULL);
	while (*str)
	{
		while (*str && *str == 32)
			str++;
		word = get_first_word(str);
		if (!word)
			return (NULL);
		words[count] = word;
		count++;
		str += strlen(word);
	}
	words[count] = NULL;
	return (words);
}
