#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int count;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		while (tmp != NULL)
		{
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			i = 1;
			tmp = tmp->next;
		}
		tmp = ht->array[count];
	}
	printf("}\n");
}
