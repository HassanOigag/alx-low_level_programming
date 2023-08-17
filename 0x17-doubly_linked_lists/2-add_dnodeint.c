#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of the list
 * @head: the head of the list
 * @n: the value of the node
 * Return: return the new added node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
