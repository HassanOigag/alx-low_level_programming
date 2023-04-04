#include "lists.h"

/**
 *sum_listint - sums the data of a list
 *@head: the head of the list
 *Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
