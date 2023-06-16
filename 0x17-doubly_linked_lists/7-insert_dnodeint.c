#include "lists.h"
/**
 * insert_dnodeint_at_index - will inserts a new node at a given position
 * @h: the pointer to a pointer to the head of the list.
 * @idx: its where the new node should be inserted
 * @n: Value to be assigned to the data (n) of the new node.
 * Return: returns address of the new node, or NULL when failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added_node, *current_node;
	unsigned int ix;

	if (h == NULL)
		return (NULL);
	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;
	added_node->prev = NULL;
	added_node->next = NULL;
	if (idx == 0)
	{
		added_node->next = *h;
		if (*h != NULL)
			(*h)->prev = added_node;
		*h = added_node;
		return (added_node);
	}
	current_node = *h;
	for (ix = 0; ix < idx - 1; ix++)
	{
		if (current_node == NULL)
		{
			free(added_node);
			return (NULL);
		}
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(added_node);
		return (NULL);
	}
	added_node->next = current_node->next;
	added_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = added_node;
	current_node->next = added_node;
	return (added_node);
}

