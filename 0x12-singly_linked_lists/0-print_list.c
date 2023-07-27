#include "lists.h"
/**
 *print_list -  a function that prints all the elements of a list_t list.
 *
 *@h: points to list to be printed
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t sz;

	for (sz = 0; h != NULL; h = h->next, sz++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

	}


	return (sz);

}
