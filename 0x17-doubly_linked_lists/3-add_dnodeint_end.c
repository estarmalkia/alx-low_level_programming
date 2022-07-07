#include "lists.h"
/**
 * *add_dnodeint_end - function adds new node to end of list
 *
 *@head: pointer to pointer of head of linked list
 *@n: const int pointer
 *
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if ((*head) == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (newnode);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = newnode;

	if (newnode->next != NULL)
		newnode->next->prev = newnode;

	return (newnode);
}
