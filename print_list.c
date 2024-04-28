#include "sort.h"

/**
 * print_list - prints a double linked list of integers.
 * @list: pointer to the head
 */
void print_list(const listint_t *list)
{
	const listint_t *current;
	current = list;

	while (current != NULL)
	{
		printf("%d", current->n);
		if (current->next != NULL)
			printf(", ");
		current = current->next;
	}
	printf("\n");
}
