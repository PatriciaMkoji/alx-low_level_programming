#include "lists.h"

/**
 * list_len - prints number of elements in a linked list list_t
 * @h: linked list list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
