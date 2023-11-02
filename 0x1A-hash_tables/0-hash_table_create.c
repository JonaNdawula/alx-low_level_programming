#include "hash_tables.h"

/**
 *hash_table_create - creates a ne hash table
 *
 *@size: size of hash table
 *
 * Return: created hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_hasht;
	unsigned long int x = 0;

	if (size == 0)
	{
		return (NULL);
	}

	new_hasht = malloc(sizeof(hash_table_t));

	if (new_hasht == NULL)
	{
		return (NULL);
	}

	new_hasht->size = size;
	new_hasht->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hasht->array == NULL)
	{
		return (NULL);
	}

	while (x < size)
	{

		new_hasht->array[x] = NULL;
		x++;
	}
	return (new_hasht);
}
