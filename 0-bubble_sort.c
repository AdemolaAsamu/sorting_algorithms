#include "sort.h"

/**
 * bubble_sort - Sorting function for an array of integers
 * @array: array of integers
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int flip = 1, i = 1, len, buffer;

	if (array && size)
		len = size;
	while (flip)
	{
		flip = 0;
		for (i = 1; i < len; i++)
		{
			if (array[i - 1] > array[i])
			{
				buffer = array[i];
				array[i] = array[i - 1];
				array[i - 1] = buffer;
				flip = 1;
				print_array(array, size);
			}
		}
		len--;
	}
}
