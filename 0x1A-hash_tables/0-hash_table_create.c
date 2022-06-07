#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: new hash table or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *myhash = NULL;

	if (size == 0)
		return (NULL);
	myhash = malloc(sizeof(hash_table_t));
	if (!myhash)
		return (NULL);
	myhash->size = size;
	myhash->array = malloc(sizeof(myhash) * size);
	if (!myhash->array)
		return (NULL);
	return (myhash);
}
