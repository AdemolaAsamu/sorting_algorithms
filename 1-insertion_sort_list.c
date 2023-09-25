#include "sort.h"

/**
 * insertion_sort_list - This sorts using insertion sort
 * @list: double pointer to a doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *status; *buffer;

	if (!list || !(*list) || !((*list)->next) || list_size(*list) < 2)
		return;

	status = (*list)->next;
	while (status != NULL)
	{
		buffer = status->prev;
		while (buffer != NULL && buffer->n > status->n)
		{
			if (buffer->prev)
				buffer->prev->next = status;
			if (status->next)
				status->next->prev = buffer;
			buffer->next = status->next;
			status->prev = buffer->prev;
			status->next = buffer;
			buffer->prev = status;

			if (status->prev == NULL)
				*list = status;
			buffer = status->prev;
			print_list(*list);
		}
		status = status->next;
	}
}
