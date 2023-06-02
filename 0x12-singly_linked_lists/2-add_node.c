#include "lists.h"

/**
 * add_node - a function that adds a node to th beginnng of a linked list
 * @head: The pointer to the head
 * @str: the string to be used as content of the node
 *
 * Return: The address of the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - A function to count the length of a string
 * @str: The string to be counted
 *
 * Return: Length of the string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
