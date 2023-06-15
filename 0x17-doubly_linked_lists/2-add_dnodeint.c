#include "lists.h"

/**
 * add_dnodeint - it adds a new node at the beginning
 * @head: the pointer that points to a pointer to the head of list.
 * @n: its the value to be assigned to new node.
 * Return: returns address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added_node;

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);
	added_node->n = n;
	added_node->prev = NULL;
	added_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = added_node;
	}
	*head = added_node;
	return (added_node);
}
