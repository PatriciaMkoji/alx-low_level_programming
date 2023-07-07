#include"hash_tables.h"
/**
 * key_index - it gives the index of a key in a hash table array.
 * @key: key string.
 * @size: it is size of the array of the hash table.
 * Return: at which the key/value pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int idx;

	/* Calculate the hash value using hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Calculate the index using the hash value and the size of the array */
	idx = hash_value % size;

	return (idx);
}

