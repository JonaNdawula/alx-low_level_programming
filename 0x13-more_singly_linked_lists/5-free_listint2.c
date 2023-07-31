#include "lists.h"
/**
 *free_listint2 - a function that frees a listint_t list
 *@head:pointer to list to be freed
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary_node;

	if (head == NULL)
	{
		return;

	}
	else
	{
		for (; *head != NULL;)
		{
			temporary_node = (*head)->next;

			free(*head);
			*head = temporary_node;


		}

	}
	*head = NULL;

}
