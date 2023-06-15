#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - it will returns the number of elements
 * @h: it will point to the head of the list.
 * Return: number of elements in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		count_node++;
		h = h->next;
	}
	return (count_node);
}
