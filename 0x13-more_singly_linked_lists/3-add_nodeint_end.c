#include "lists.h"

/**
 *add_nodeint_end - adds a node to the end of the list
 *@head: the head of the list
 *@n: the value of the node to add
 *Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
		*head = new;
	return (new);
}
