#include "hash_tables.h"
/**
 * hash_table_create - this function create a hash table
 * @size: this is the size of the array
 * Return: Always the hash table or NULL if it fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
