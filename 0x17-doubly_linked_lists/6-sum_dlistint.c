#include "lists.h"
/**
 * sum_dlistint - sums the values of all the nodes in a dlistint_t list
 * @head: pointer to the head of the list
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *lem;
int sum = 0;

lem = head;
while (lem != NULL)
{
sum += lem->n;
lem = lem->next;
}
return (sum);
}