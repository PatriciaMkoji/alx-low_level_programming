#include "lists.h"

/**
 * free_dlistint - it frees a dlistint_t list.
 * @head: it will point to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
