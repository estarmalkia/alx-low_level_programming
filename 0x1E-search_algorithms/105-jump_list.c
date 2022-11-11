#include "search_algos.h"

/**
 * jump_list - jump search in a sorted linked list
 * @list: the list to search
 * @size: the size of the list
 * @value: the value to search
 * Return: NULL if not present otherwise a pointer to located node
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = 0;
	listint_t *st = list;
	listint_t *end = list;

	if (!list)
		return (NULL);
	jump = jump + sqrt((int)size);
	while (end->index < jump)
		end = end->next;
	while (end && end->n <= value && jump <= size)
	{
		if (end)
			printf("Value checked at index [%lu] = [%d]\n",
			       end->index, end->n);
		st = end;
		jump = jump + sqrt((int)size);
		while (end && end->index < jump)
			end = end->next;
	}
	if (end && st)
		printf("Value found between indexes [%ld] and [%ld]\n",
		       st->index, end->index);
	while (end && st->index <= end->index)
	{
		if (st->index < size)
			printf("Value checked at index [%lu] = [%d]\n",
			       st->index, st->n);
		if (st->index < size && st->n == value)
			return (st);
		st = st->next;
	}
	return (NULL);
}
