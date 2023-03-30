#include "lists.h"

/**
 *_strlen - gets the size of the string
 *@str: the string in hand
 *Return: returns the number of char in string
 */

unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 *add_node - add a new node at the beginnig of a list
 *@head: the head of the list
 *@str: the string to add
 *Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	if (!*head)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
