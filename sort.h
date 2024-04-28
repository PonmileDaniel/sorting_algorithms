#ifndef _SORT_H
#define _SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * struct listint_s - Doubly link list
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_S *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(int *array, size_t size);
#endif
