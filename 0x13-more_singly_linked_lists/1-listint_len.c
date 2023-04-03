#include "lists.h"

/**
 *listint_len - gets the size of the list
 *@h: the head of the linked list
 *Return: the numner of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (counter);
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
