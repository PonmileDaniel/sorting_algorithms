#include "sort.h"

/**
 * print_array - function to print the array
 * @array: input array
 * @size: size of array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}
