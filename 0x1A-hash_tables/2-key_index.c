#include "hash_tables.h"
/**
 * key_index - return the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index at which the key pair should be stored
 * inthe array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
