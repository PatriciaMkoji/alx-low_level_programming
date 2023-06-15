#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added_node;
	dlistint_t *tmp;

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
	{
		added_node->prev = NULL;
		*head = added_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = added_node;
		added_node->prev = tmp;
	}

	return (added_node);
}
