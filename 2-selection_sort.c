#include "sort.h"
/**
 * selection_sort - Sort integers using selection algorithm
 * @array: pointer to the array to be sorted
 * @size: @array size
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, buff = 0, hld = 0;

	if (!array || size < 2)
		return;
	for (; i < size - 1; i++)
	{
		hld = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[hld])
				hld = j;
		}
		if (hld != i)
		{
			buff = array[i];
			array[i] = array[hld];
			array[hld] = buff;
			print_array(array, size);
		}
	}
}
