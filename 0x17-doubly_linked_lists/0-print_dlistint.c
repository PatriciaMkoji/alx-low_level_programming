#include "lists.h"

/**
 * print_dlistint - it will prints all elements
 * @h: it points to the head of the list.
 * Return: number of nodes in list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_node++;
	}
	return (count_node);
}
