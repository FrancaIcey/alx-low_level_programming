#include "lists.h"

/**
 * listint_len - A function that counts the number of nodes in a linked list
 * @h: head
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
