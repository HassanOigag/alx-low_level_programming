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

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmp)
	{
		if (idx == i)
			break;
		i++;
		tmp = tmp->next;
	}
	if (idx == i)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next = new;
	}
	return (new);
}
