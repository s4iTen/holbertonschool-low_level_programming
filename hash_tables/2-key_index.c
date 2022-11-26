#include "hash_tables.h"
/**
 * key_index - this func return the index at which a key/value
 *				should be stored in array of hash_table
 * @key: the key to get the index of
 * @size: this the size of the hash table
 * Return: Always the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
