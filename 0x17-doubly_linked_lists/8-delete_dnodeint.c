#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: the head of the node
 * @index: the index of the node to delete
 * Return: 1 on success else -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int counter = 0;

	if (*head && index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp && counter != index)
	{
		counter++;
		tmp = tmp->next;
	}
	if (tmp && counter == index)
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
