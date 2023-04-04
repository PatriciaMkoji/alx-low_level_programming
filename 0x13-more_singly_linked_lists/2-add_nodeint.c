#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_beginning;

	add_beginning = malloc(sizeof(listint_t));

	if (add_beginning == NULL)
	{
		return (NULL);
	}

		add_beginning->n = n;
		add_beginning->next = *head;

		*head = add_beginning;

	return (add_beginning);
}
