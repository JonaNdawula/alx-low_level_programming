#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: represents hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *current_node;
	unsigned long int current_index = 0;

	while (current_index < ht->size)
	{
		if (ht->array[current_index] != NULL)
		{
			while (ht->array[current_index] != NULL)
			{
				current_node = ht->array[current_index]->next;
				free(ht->array[current_index]->key);
				free(ht->array[current_index]->value);
				free(ht->array[current_index]);
				ht->array[current_index] = current_node;
			}

		}
		current_index++;
	}

	free(ht->array);
	free(ht);
}
