#include "lists.h"

/**
 * sum_dlistint - sums the node content of a list
 * @head: the head of the list
 * Return: return the sum of all the node's content
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
