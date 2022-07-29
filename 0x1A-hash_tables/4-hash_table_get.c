#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - searches for a values in hash table
 * @ht: address of hash table
 * @key: key associated with value
 *
 * Return: value if key exists, NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[index]; temp; temp = temp->next)
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	return (NULL);
}
