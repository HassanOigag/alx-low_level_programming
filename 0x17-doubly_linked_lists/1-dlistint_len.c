#include "lists.h"

/**
 * dlistint_len - gets the size of the list
 * @h: the head of the list
 * Return: the size of the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = (dlistint_t *) h;
	size_t  counter = 0;

	while (tmp)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}
