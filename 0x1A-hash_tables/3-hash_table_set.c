#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if succeeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *new = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !value)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
