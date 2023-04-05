#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of list.
 * @head: points to the address
 * @index:index of the node to be delete
 * Return: success - 1, failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *p;
	size_t delete;

	p = *head;
	if (p == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	for (delete = 0; delete < (index - 1); delete++)
	{
		if (p->next == NULL)
			return (-1);

		p = p->next;
	}
	current = p->next;
	p->next = current->next;
	free(current);
	return (1);
}
