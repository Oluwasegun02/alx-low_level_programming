#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t seg = 0;

	while(h != NULL)
        {
		if(h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		seg += 1;
		h = h->next;
	}
	
	return (seg)
}
