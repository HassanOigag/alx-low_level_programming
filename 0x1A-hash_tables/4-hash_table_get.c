#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 *
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if key NOT
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
