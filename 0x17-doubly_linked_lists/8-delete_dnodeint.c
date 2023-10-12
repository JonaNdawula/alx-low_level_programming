#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at given index
 *
 *@head: head of list
 *@index: index of new node
 *
 *Return: 1 if successful, - 1 if unsuccessful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *current_node, *previous_node;
	unsigned int x;

	current_node = *head;

	if (current_node == NULL)
		return (-1);

	for (; current_node->prev != NULL; current_node = current_node->prev)
	{
	}

	for (x = 0; current_node != NULL; current_node = current_node->next, x++)
	{

		if (x == index)
		{
			if (x == 0)
			{
				*head = current_node->next;
				if (*head != NULL)
					(*head)->prev = NULL;

			}
			else
			{

				previous_node->next = current_node->next;
				if (current_node->next != NULL)
					current_node->next->prev = previous_node;
			}
			free(current_node);
			return (1);
		}
		previous_node = current_node;
	}
	return (-1);
}
