#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new;
    char *cp_value;
    unsigned int index, i;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);
    cp_value = strdup(value);
    if (cp_value == NULL)
        return (0);
    index = key_index((const unsigned char *)key, ht->size);
    i = index;
    while (ht->array[i])
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            free(ht->array[i]->value);
            ht->array[i]->value = cp_value;
            return (1);
        }
        
    }
    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        free (cp_value);
        return (0);
    }
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return (0);
    }
    new->value = cp_value;
    new->next = ht->array[index];
    ht->array[index] = new;
    return (1);
}