#include "lists.h"
/**
 *add_nodeint_end - a function that adds a new node at the end
 *@head:points to first element in list
 *@n: data to be added to list
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node;
	listint_t *temporary_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{

		return (NULL);

	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;

	}

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);

	}
	else
	{

		while (temporary_node->next)
		{

			temporary_node = temporary_node->next;

		}

		temporary_node->next = new_node;
	}
	return (new_node);
}
