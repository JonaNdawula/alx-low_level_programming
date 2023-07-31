#include "lists.h"
/**
 *free_listint - will free the linked list
 *@head:linked list to be freed
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temporary_node;

	for (temporary_node = head; temporary_node != NULL;
			temporary_node = head)
	{

		head = head->next;

		free(temporary_node);



	}


}
