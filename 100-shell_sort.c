#include "sort.h"

/**
 * shell_sort - Using Shell Algorithm to sort
 * @array: The array to be sorted
 * @size: @array size pointer
 */

void shell_sort(int *array, size_t size)
{
	int y, i = 0, j = 0, buffer = 0, lenght = 0, inter = 1;

	lenght = size;
	y = lenght / 3;
	if (!array || lenght < 2)
		return;

	while (inter <= y)
		inter = inter * 3 + 1;

	while (inter > 0)
	{
		i = inter;
		while (i < lenght)
		{
			j = i - inter;
			while (j >= 0)
			{
				if (array[j + inter] > array[j])
					break;
				buffer = array[j];
				array[j] = array[j + inter];
				array[j + inter] = buffer;

				j = j - inter;
			}
			i++;
		}
		print_array(array, lenght);
		inter = (inter - 1) / 3;
	}
}
