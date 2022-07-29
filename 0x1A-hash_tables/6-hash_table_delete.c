#include <stdlib.h>
#include "hash_tables.h"
/**
 * free_list - frees a linked list in hash table
 * @head: head of linked list
 *
 * Return: nothing
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp = head;

	while (temp)
	{
		head = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = head;
	}
}

/**
 * hash_table_delete - deletes hash tables
 * @ht: address of hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	if (ht)
	{
		for (index = 0; index <= ht->size; index++)
			if (ht->array[index])
				free_list(ht->array[index]);
		free(ht->array);
		free(ht);
	}
}
