#include "lists.h"

/**
 * sum_dlistint - will returns the sum of all the data
 * @head: will point to the head of the list
 * Return: e the sum of all the data in the list & 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int summation = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		summation += current_node->n;
		current_node = current_node->next;
	}

	return (summation);
}
