#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list
 * Return: or no return at all
 */

void free_list(list_t *head)
{
	list_t *seg;

	while ((seg = head) != NULL)
	{
		head = head->next;
		free(seg->str);
		free(seg);

	}
}
