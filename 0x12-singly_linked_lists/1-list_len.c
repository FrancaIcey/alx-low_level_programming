#include "lists.h"

/**
 * list_len - A function to count the number of nodes in a linked list
 * @h: head of list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
