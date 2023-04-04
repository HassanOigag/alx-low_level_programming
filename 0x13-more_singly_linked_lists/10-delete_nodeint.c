#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at the specified index
 *@head: the head of the node
 *@index: the index of the node to delete
 *Return: 1 on success else -1 is returned
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *node;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp && i != index - 1)
	{
		i++;
		tmp = tmp->next;
	}
	if (!tmp)
		return (-1);
	node = tmp->next;
	tmp->next = tmp->next->next;
	free(node);
	return (1);
}
