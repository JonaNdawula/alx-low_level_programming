#include "lists.h"

/**
 *add_dnodeint_end - adds node at end of list
 *
 *@head: list head
 *@n: element value
 *
 * Return: element Address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{


	dlistint_t *head_n, *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	head_n = *head;

	if (head_n != NULL)
	{
		for (; head_n->next != NULL; head_n = head_n->next)
		{

		}
		head_n->next = new_node;

	}
	else
	{

		*head = new_node;
	}
	new_node->prev = head_n;

	return (new_node);
}
