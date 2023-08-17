#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the head of the linked list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t	*tmp = head;

	while (tmp && tmp->next)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	if (tmp)
		free(tmp);
}
