#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: the head of the list
 * @n: the value of the node
 * Return: return the new added node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
