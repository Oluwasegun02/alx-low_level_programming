#include "lists.h"

/**
 *  list_len - finds the number of elements in a linked list
 *  @h: singly  linked list
 *  Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements_num = 0;

	while (h != NULL)

	{

		h = h->next;

		elements_num++;

	}

	return (elements_num);
}
