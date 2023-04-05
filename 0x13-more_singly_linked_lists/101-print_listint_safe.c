#include "lists.h"
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts the number of unique nodes in a looped list.
 * @head: points to the head of the listint_t to check
 * Return: If the list is not looped - 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *start, *last;
	size_t p;

	p = -1;
	if (head == NULL || head->next == NULL)
		return (0);

	start = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (start == last)
		{
			start = head;
			while (start != last)
			{
				p++;
			start = start->next;
				last = last->next;
			}

			start = start->next;
			while (start != last)
			{
				p++;
				start = start->next;
			}

			return (p);
		}

		start = start->next;
		last = (last->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints
 * @head: A pointer to the head of the list
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t q, i;

	i = 0;
	q = looped_listint_len(head);

	if (q == 0)
	{
		for (; head != NULL; q++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < q; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (q);
}
