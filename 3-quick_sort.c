#include "sort.h"
/**
 * quick_sort - Sorting using quick sort Algorithm
 * @array: array of integers to be sorted
 * @size: @array size
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;

	quick_sort_helper(array, 0, size - 1);
}

/**
 * quick_sort_helper - function that helps with sorting
 * @array: pointer to array of integers
 * @low: lowest integer value
 * @high: higest integer value
 */

void quick_sort_helper(int *array, int low, int high)
{
	int pick;

	if (low < high)
	{
		pick = lomuto_partition(array, low, high);
		/*Prints the array after each swap*/

		print_array(array, high - low + 1);

		quick_sort_helper(array, low, pick - 1);
		quick_sort_helper(array, pick + 1, high);
	}
}

/**
 * lomuto_partition - This is a lomuto partitioning
 * @array: pointer to the array of integers
 * @low: lowest integer
 * @high: higer integer
 * Return: Int value of i+1
 */

int lomuto_partition(int *array, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * swap - function for swapping various levels
 * @a: pointer to previous
 * @b: pointer to next
 * Return: void
 */
void swap(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
