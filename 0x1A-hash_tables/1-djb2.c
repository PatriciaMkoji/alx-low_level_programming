#include "hash_tables.h"
/**
 * hash_djb2 - it implements the djb2 hash algorithm.
 * @str: its the string used to generate the hash value.
 * Return: calculated hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
