#include "lists.h"

/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to be retrieved
 * Return: pointer to the indexed node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int t;

if (head == NULL)
return (NULL);
if (index == 0)
return (head);
for (t = 0; t < index; t++)
{
if (head->next == NULL)
return (NULL);
head = head->next;
}
return (head);
}
