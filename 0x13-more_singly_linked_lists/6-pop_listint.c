#include "lists.h"

/**
 * pop_listint - Frees a listint_t list
 * @head: points to the address of the head of the listint_t list.
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int store;

	if (*head == NULL)
		return (0);

	current = *head;
	store = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (store);
}

