#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: the size of the hash table
 *
 * Return: pointer to new hash table on success, NULL
 * on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size > 0)
	{
		ht = malloc(sizeof(hash_table_t));
		if (!ht)
			return (NULL);
		ht->size = size;
		ht->array = malloc(size * sizeof(hash_node_t *));
		if (!ht->array)
		{
			free(ht);
			return (NULL);
		}
	}
	return (ht);
}
