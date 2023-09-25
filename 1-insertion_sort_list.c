#include "sort.h"

/**
 * insertion_sort_list - This sorts using insertion sort
 * @list: double pointer to a doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *status, *buf;

	if (!list || !(*list) || !((*list)->next) || list_size(*list) < 2)
		return;

	status = (*list)->next;
	while (status != NULL)
	{
		buf = status->prev;
		while (buf != NULL && buf->n > status->n)
		{
			if (buf->prev)
				buf->prev->next = status;
			if (status->next)
				status->next->prev = buf;
			buf->next = status->next;
			status->prev = buf->prev;
			status->next = buf;
			buf->prev = status;

			if (status->prev == NULL)
				*list = status;
			buf = status->prev;
			print_list(*list);
		}
		status = status->next;
	}
}

/**
 * list_size - presents the size of a list
 *
 * @list - pointer to the list to be counted
 * Return: The list size
 */

int list_size(const listint_t *list)
{
	int k;

	k = 0;
	while(list)
	{
		++k;
		list = list->next;
	}
	return (k);
}
