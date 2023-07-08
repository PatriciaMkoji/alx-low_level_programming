#include "hash_tables.h"
/**
 * hash_table_delete - it deletes a hash table.
 * @ht: the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node, *temporary;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			temporary = node;
			node = node->next;
			free(temporary->key);
			free(temporary->value);
			free(temporary);
		}
	}
	free(ht->array);
	free(ht);
}
