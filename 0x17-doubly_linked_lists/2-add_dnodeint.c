#include "lists.h"
/**
 * *add_dnodeint - function adds new node to beginning of list
 *
 *@head: pointer to pointer of head of linked list
 *@n: const int pointer
 *
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newhead = NULL;

	newhead = malloc(sizeof(dlistint_t));
	if (newhead == NULL)
		return (NULL);

	newhead->n = n;
	newhead->next = (*head);
	newhead->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newhead;

	(*head) = newhead;

	return (newhead);
}
