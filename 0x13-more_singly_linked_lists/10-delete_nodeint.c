#include "lists.h"
/**
 *delete_nodeint_at_index -  function that deletes the node at index
 *
 *@head:points to first element in list
 *@index: index for node to be deleted
 *
 *Return: 1 (Success) else -1 (Failure)
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int x;
	listint_t *temp_node = *head;
	listint_t *current_node = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head  = (*head)->next;
		free(temp_node);
		return (1);
	}

	for (x = 0; x < index - 1; x++)
	{

		if (temp_node == NULL || (temp_node->next) == NULL)
		{
			return (-1);
		}
		temp_node = temp_node->next;
	}
	current_node = temp_node->next;
	temp_node->next = current_node->next;
	free(current_node);
	return (1);

}
