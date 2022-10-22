#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: head of the linked list.
 * @str: string to store in the list.
 *
 * Return: NULL in case of failure or address or the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *seg;
	int len;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	seg = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = seg;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
