#include "hash_tables.h"
/**
 * hash_djb2 - hash function
 * @str: string to use to generate hash value
 *
 * Description: generates hash values using
 * djb2 aglorithm
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
