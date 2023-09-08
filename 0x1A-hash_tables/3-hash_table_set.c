#include "hash_tables.h"

/**
 * @hash_table_set - function that adds an element to the hash table
 * 
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * @return 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node = NULL, *temp = NULL;

    if (!ht || !key || !value)
        return (0);
    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            return (1);
        }
        temp = temp->next;
    }
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
