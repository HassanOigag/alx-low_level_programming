#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node at the specified index
 *@head: the address of the head
 *@idx: index where to add the new node
 *@n: the new node's data
 *Return: returns the new added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	unsigned int prev = idx - 1;
	unsigned int index = 0;
	listint_t *tmp;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if  (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp && index != prev)
	{
		index++;
		tmp = tmp->next;
	}
	if (!tmp)
	{
		free(node);
		return (NULL);
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
