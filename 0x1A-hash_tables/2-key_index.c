#include "hash_tables.h"
/**
 * key_index - finds the index of key in a hash table
 * @key: key of value to find
 * @size: size of hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (size > 0)
		index = hash_djb2(key) % size;
	return (index);
}
