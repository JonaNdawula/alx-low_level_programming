#include "lists.h"

/**
 *get_dnodeint_at_index - a function that returns the nth node
 *
 *@head: points to list head
 *@index: index of node to be seacrhed for
 *
 *Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *temporary;
	unsigned int size = 0;

	if (head == NULL)
		return (NULL);
	temporary = head;

	for (; temporary; temporary = temporary->next)
	{

		if (index == size)
			return (temporary);
		size++;
	}
	return (NULL);


}
