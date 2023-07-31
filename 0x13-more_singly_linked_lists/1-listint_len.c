#include "lists.h"
/**
 *listint_len - a function that returns the number of elements in a linked
 *@h: linked list to check
 *
 *Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes;

	for (num_of_nodes = 0; h != NULL; num_of_nodes++)
	{

		h = h->next;

	}

	return (num_of_nodes);

}
