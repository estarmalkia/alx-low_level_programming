#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_print - prints the contents of a hash table
 * @ht: address of hash table
 *
 * Description: prints the contents of a hash table in a
 * format similar to Python dictionary
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index;
	char *del = "";

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
		for (temp = ht->array[index]; temp; temp = temp->next)
		{
			printf("%s'%s': '%s'", del, temp->key, temp->value);
			del = ", ";
		}
	printf("}\n");
}
