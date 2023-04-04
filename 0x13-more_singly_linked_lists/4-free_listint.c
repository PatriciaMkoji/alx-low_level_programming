#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: points to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
