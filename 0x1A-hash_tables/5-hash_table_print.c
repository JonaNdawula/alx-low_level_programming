#include "hash_tables.h"

/**
 *hash_table_print - prints hash table
 *@ht: represents hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int current_index = 0;
	int is_first;

	if (ht == NULL)
	{
		return;
	}

	putchar('{');

	for (current_index = 0; current_index < ht->size; current_index++)
	{
		current_node = ht->array[current_index];
		if (current_node != NULL)
		{

			for (; current_node != NULL; current_node = current_node->next)
			{

				if (is_first == 1)
				{
					printf(", ");
				}
				printf("'%s': '%s'", current_node->key, current_node->value);
				is_first = 1;
			}

		}
	}

	putchar('}');
	putchar('\n');
}
