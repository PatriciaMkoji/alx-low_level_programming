#include "lists.h"
/**
 * delete_dnodeint_at_index - will deletes the node at a given index
 * @head: will be pointer to a pointer to the head of list.
 * @index: its the index of the node to be deleted from 0.
 * Return: 1 deletion succeeded, -1 failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int ix;

	if (head == NULL || *head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}
	for (ix = 0; ix < index; ix++)
	{
		if (current_node == NULL)
			return (-1);
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (-1);
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;
	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;
	free(current_node);
	return (1);
}
