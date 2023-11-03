#include "hash_tables.h"

/**
 *hash_table_get - retrieves value associated with a key
 *
 *@ht: respresents  the hashtable
 *@key: represents the key being looked for
 *
 *Return: value of associated key else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *current_node;
	unsigned long int current_index;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
	{
		return (NULL);
	}

	current_index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[current_index];

	if (current_node == NULL)
		return (NULL);

	for (; current_node != NULL && strcmp(current_node->key, key);
			current_node = current_node->next)
	{

	}

	if (current_node == NULL)
	{
		return (NULL);
	}
	else
	{

		return (current_node->value);
	}
}
