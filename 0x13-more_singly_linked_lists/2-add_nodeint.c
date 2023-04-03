#include "lists.h"

/**
 *add_nodeint - add a node at the beginning of a list
 *@head: the address of the head
 *@n: the new node data
 *Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		new->next = *head;
		*head = new;
	}
	else
		*head = new;
	return (new);
}
