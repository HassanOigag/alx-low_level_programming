#include "lists.h"

/**
 *pop_listint - deletes the head of the node
 *@head: the lists head
 *Return: returns the data of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!*head)
		return (0);
	node = *head;
	*head = (*head)->next;
	n = node->n;
	free(node);
	return (n);
}
