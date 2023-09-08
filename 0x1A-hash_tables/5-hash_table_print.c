#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * 
 * @ht: the hash table
 * @return void
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *temp = NULL;
    int flag = 0;

    if (!ht)
        return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        temp = ht->array[i];
        while (temp)
        {
            if (flag == 1)
                printf(", ");
            printf("'%s': '%s'", temp->key, temp->value);
            flag = 1;
            temp = temp->next;
        }
    }
    printf("}\n");
}
