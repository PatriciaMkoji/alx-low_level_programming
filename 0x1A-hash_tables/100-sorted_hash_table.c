#include "hash_tables.h"
/**
 * shash_table_create - it creates a new ordered hash table.
 * @size: size of the array.
 * Return: A pointer to the newly created ordered hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int idx;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
		ht->array[idx] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - will insert key/value pair into the ordered table.
 * @ht: ordered hash table.
 * @key: key string.
 * @value: value associated with key.
 * Return: 1 if successful, 0 fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		if (strcmp(key, ht->shead->key) < 0)
		{
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else if (strcmp(key, ht->stail->key) > 0)
		{
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			node = ht->shead;
			while (node != NULL && strcmp(key, node->key) > 0)
				node = node->snext;

			new_node->sprev = node->sprev;
			new_node->snext = node;
			node->sprev->snext = new_node;
			node->sprev = new_node;
		}
	}

	return (1);
}

/**
 * shash_table_get - will retrievevalue associated with a key from ordered hash
 * @ht: ordered hash table.
 * @key:key to search for.
 * Return: value associated with key, NULL if the key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
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

/**
 * shash_table_print - prints elements of ordered hash table in sorted order.
 * @ht: ordered hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints elements of ordered table in reverse order.
 * @ht: ordered hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}

#include "hash_tables.h"
/**
 * shash_table_delete - deletes ordered table & frees allocated memory.
 * @ht: ordered hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
        shash_node_t *node, *temporary;
        unsigned long int idx;

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
