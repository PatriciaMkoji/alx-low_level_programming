#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the head of the listint_t list.
 * @index: node that locates - indices start at 0.
 * Return: NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t current;

	for (current = 0; current < index; current++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
