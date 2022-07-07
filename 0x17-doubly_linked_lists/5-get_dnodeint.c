#include "lists.h"
/**
 * *get_dnodeint_at_index - function returns nth node of a list
 *
 *@head: pointer to pointer of head of linked list
 *@index: index of node starting at 0
 *
 * Return:  NULL if node does not exit
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
