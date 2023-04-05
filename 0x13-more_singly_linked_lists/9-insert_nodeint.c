#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node @ a given position.
 * @head: points to address of head.
 * @idx: The index
 * @n: The integer for the new node
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_new, *p;
	size_t insert;

	p = *head;
	add_new = malloc(sizeof(listint_t));
	if (add_new == NULL)
		return (NULL);
	add_new->n = n;
	if (idx == 0)
	{
		add_new->next = p;
		*head = add_new;
		return (add_new);
	}

	for (insert = 0; insert < (idx - 1); insert++)
	{
		if (p == NULL || p->next == NULL)
			return (NULL);

		p = p->next;
	}

	add_new->next = p->next;
	p->next = add_new;

	return (add_new);
}
