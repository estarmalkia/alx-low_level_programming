#include "lists.h"

/**
 * print_dlistint - function prints all elements of dlistint_t list
 *
 *@h: pointer to head of linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (x);
}
