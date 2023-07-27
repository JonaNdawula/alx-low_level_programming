#include "lists.h"
/**
 *free_list - frees the linked list
 *
 *@head: list to be freed
 *
 */

void free_list(list_t *head)
{
	list_t *tempNode;


	while (head != NULL)
	{

		tempNode = head->next;
		free(head->str);
		free(head);
		head = tempNode;
	}

}
