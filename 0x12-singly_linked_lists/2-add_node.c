#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the linked list.
 * @str: string to store in the list.
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *seg;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	seg = strdup(str);
	if (seg == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new_node->str = seg;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
