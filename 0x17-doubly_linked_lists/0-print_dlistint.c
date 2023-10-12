#include "lists.h"

/**
 *print_dlistint -  prints all the elements of a dlistint_t list.
 *@h: represents head of list
 *
 *Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev !=  NULL)
		h = h->prev;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		counter++;
	}

	return (counter);


}
