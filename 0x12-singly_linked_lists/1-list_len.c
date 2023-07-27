#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 *@h: point to the list
 *
 *Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t sz;

	for (sz = 0; h != NULL; sz++)
	{

		h =  h->next;

	}

	return (sz);



}
