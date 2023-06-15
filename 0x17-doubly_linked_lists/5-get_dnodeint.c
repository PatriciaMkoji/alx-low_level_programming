#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int node_count = 0;

	while (current_node != NULL)
	{
		if (node_count == index)
			return (current_node);
		current_node = current_node->next;
		node_count++;
	}
	return (NULL);
}
