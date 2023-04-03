#include "lists.h"

/**
 *print_listint - prints the linked list
 *@h: the head of the linked list
 *Return: the numner of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (counter);
	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
