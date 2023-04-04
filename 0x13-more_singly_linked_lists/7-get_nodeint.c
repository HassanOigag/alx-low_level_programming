#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a list
 *@head: head of the list
 *@index: the index of the node
 *Return: the node if found else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
