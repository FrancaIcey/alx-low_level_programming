#include "lists.h"

/**
 * sum_listint - A function that sums up all the data in a linked list
 * @head: head
 *
 * Return: Sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
