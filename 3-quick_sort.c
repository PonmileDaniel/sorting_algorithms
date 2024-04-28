#include "sort.h"

/**
 * partition - Partitions the arrays and return the index
 * @array: Pointer to the first element of the array'
 * @low: Starting index of the partition to be sorted
 * @high: Ending index of the partition
 * @size: Number of element in the array
 * Return: Index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j, tmp;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if ((i + 1) != high)
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - Recursively sorts the array
 * @array: Pointer to the first element of the array
 * @low: Starting index
 * @high: Ending index
 * @size: Number of element
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * quick_sort - sort an array of integers
 * @array: Pointer to the first element of theh array
 * @size: Number of element
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
