#include "lists.h"

/**
 *reverse_listint - reverses a linkded list
 *@head: the head of the list
 *Return: the new head address
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (!*head || !((*head)->next))
		return (*head);
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
