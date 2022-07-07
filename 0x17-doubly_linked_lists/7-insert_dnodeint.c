#include "lists.h"
/**
 * *insert_dnodeint_at_index - function inserts new node at given position
 *
 *@h: pointer to pointer of head of linked list
 *@idx: unsigned int index position
 *@n: int data
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentnode;
	dlistint_t *newnode;

	while (*h)
	{
		newnode = malloc(sizeof(dlistint_t));
		currentnode = *h;
		newnode->n = n;

		if (idx == 0)
		{
			newnode->next = NULL;
			return (newnode);
		}
		while (currentnode->next != NULL && idx - 1 > 0)
		{
			currentnode = currentnode->next;
			idx--;
		}
		if (currentnode->next == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = currentnode->next;
		currentnode->next = newnode;
		return (newnode);
	}
	return (NULL);
}
