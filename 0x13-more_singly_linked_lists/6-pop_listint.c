#include "lists.h"

/**
 * pop_listint - A function to delete head node of a listint_t linked list,
 *                      returns the head node’s data
 *@head: pointer to linked list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return(num);
}
