#include "lists.h"
/**
 * print_dlistint - print a doubly linked list
 * @h: the head of the list
 * Return: returns the number of the nodes in the list
 */


size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp = (dlistint_t *)h;
	size_t counter = 0;

	while (tmp)
	{
		counter++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (counter);
}
