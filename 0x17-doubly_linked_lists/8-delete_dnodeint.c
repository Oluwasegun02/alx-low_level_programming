#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at a given index
 * @head: pointer to the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *lem;
dlistint_t *lem2;
unsigned int i;

if (head == NULL)
return (-1);
if (*head == NULL)
return (-1);
if (index == 0)
{
lem = *head;
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(lem);
return (1);
}
lem = *head;
i = 0;
while (lem != NULL)
{
if (i == index - 1)
{
lem2 = lem->next;
lem->next = lem->next->next;
if (lem->next != NULL)
lem->next->prev = lem;
free(lem2);
return (1);
}
lem = lem->next;
i++;
}
return (-1);

return (1);
}