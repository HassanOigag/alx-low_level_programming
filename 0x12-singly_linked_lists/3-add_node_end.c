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
 *add_node_end - add a new node to the end of a list
 *@head: the head of the list
 *@str: the string to add
 *Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	tmp = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
