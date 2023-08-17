#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: the head of the list
 * @idx: the index where to insert the node
 * @n: the content of the new node
 * Return: the newly created node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	unsigned int i = 0;
	dlistint_t *new = NULL;
	unsigned int index;

	if (idx == 0)
		return (add_dnodeint(h, n));
	index = idx - 1;
	while (tmp && index != i)
	{
		i++;
		tmp = tmp->next;
	}
	if (i == index && tmp)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = new;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
