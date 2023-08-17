#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node if found else NULL is returned
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
