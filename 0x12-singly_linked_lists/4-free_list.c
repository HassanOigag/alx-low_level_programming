#include "lists.h"

/**
 *free_list - free an entire list
 *@head: the head of the list
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
