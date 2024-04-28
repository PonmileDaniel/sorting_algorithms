#include "sort.h"

/**
 * bubble_sort - function that sort an array
 * @array: input array
 * @size: sise of the array
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, n;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				tmp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
