#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end;
	listint_t *last;

	add_end = malloc(sizeof(listint_t));
	if (add_end == NULL)
	{
		return (NULL);
	}
	add_end->n = n;
	add_end->next = NULL;
	if (*head == NULL)
	{
		*head = add_end;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = add_end;
	}
	return (add_end);
}
