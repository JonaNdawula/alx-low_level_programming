#include "lists.h"

/**
 * free_dlistint - fress a list
 *
 *@head: points to head in list
 */

void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return;
	for (; head->next;)
	{

		head = head->next;
		free(head->prev);

	}
	free(head);
}

