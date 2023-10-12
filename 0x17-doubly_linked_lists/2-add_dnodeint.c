#include "lists.h"

/**
 *add_dnodeint - adds new node at list start
 *
 *@head: list head
 *@n: element value
 *
 *Return: element address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node, *node_head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->prev = NULL;
	node_head = *head;

	if (node_head != NULL)
	{
		for (; node_head->prev != NULL; node_head = node_head->prev)
		{

		}

	}

	new_node->next = node_head;

	if (node_head != NULL)
		node_head->prev = new_node;

	*head = new_node;

	return (new_node);


}
