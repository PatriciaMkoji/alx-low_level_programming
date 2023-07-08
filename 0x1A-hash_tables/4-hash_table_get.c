#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_get - will retrieve the value associated with a keyin hash table.
 * @ht: hash table to look into.
 * @key: key to search for.
 * Return: value associated withkey /NULL if the key cldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
				node = node->next;
	}
	return (NULL);
}
