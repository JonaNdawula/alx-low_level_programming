#include "lists.h"

/**
 *dlistint_len - shows number of elements in doubly linked list
 *
 *@h: represents head of list
 *
 *Return: number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;

	for (; h != NULL; h = h->next)
	{
		counter++;
	}

	return (counter);
}
