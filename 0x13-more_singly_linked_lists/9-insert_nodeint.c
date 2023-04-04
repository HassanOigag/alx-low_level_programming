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
	int prev_idx = idx - 1;
	listint_t *tmp;
	int i = 0;
	int found = 0;
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head && idx == 0)
	{
		*head = node;
		return (node);
	}
	if (!*head)
		return (NULL);
	tmp = *head;
	while (tmp)
	{
		if  (i == prev_idx)
		{
			found = 1;
			break;
		}
		i++;
		tmp = tmp->next;
	}
	if (tmp || !found)
		return (NULL);
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
