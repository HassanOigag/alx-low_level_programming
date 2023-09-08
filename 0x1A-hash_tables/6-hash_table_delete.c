#include "hash_tables.h"

/**
 * @hash_table_delete - function that deletes a hash table
 * 
 * @ht: the hash table
 * @return void
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *temp = NULL;
    hash_node_t *temp2 = NULL;

    if (!ht)
        return;
    for (i = 0; i < ht->size; i++)
    {
        temp = ht->array[i];
        while (temp)
        {
            temp2 = temp->next;
            free(temp->key);
            free(temp->value);
            free(temp);
            temp = temp2;
        }
    }
    free(ht->array);
    free(ht);
}
