#include "sort.h"

/**
 * list_size - presents the size of a list
 *
 * @list: pointer to the list to be counted
 * Return: The list size
 */
int list_size(const listint_t *list)
{
	int i;

	i = 0;

	while (list)
	{
		++i;
		list = list->next;
	}
	return (i);
}
