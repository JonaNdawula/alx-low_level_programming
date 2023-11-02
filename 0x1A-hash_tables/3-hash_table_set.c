#include "hash_tables.h"

/**
 * set_node_free - sets node free
 * @node_var: The node to free
 *
 */

void set_node_free(hash_node_t *node_var)
{
	free(node_var->key);
	free(node_var->value);
	free(node_var);
}

/**
 *hash_table_set - Adds element to hash table
 *@ht: represents hash table
 *@key: key to index
 *@value: value to be added to hash table
 *
 *Return: (1) if successfull, (0) if unsuccessful
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned long new_index;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);
			new_index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *)key);
	new_node->value = strdup((char *)value);
	new_node->next = NULL;
	if (ht->array[new_index] == NULL)
		ht->array[new_index] = new_node;
	else
	{
		current_node = ht->array[new_index];
		if (strcmp(current_node->key, key) == 0)
		{
			new_node->next = current_node->next;
			ht->array[new_index] = new_node;
			set_node_free(current_node);

			return (1);
		}
		for (; current_node->next != NULL && strcmp(current_node->next->key, key)
				!= 0; current_node = current_node->next)
		{
		}
		if (strcmp(current_node->key, key) == 0)
		{
			new_node->next = current_node->next->next;
			set_node_free(current_node->next);
			current_node->next = new_node;
		}
		else
			new_node->next = ht->array[new_index];
		ht->array[new_index] = new_node;
	}
	return (1);
}
