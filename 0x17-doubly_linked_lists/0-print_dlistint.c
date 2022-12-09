#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *lem = h;

	while (lem != NULL)
	{
		printf("%d\n", lem->n);
		lem = lem->next;
		i++;
	}
	return (i);
}