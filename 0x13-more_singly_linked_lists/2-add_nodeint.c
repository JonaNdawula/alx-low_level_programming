#include "lists.h"
/**
 *listint_t *add_nodeint - add new node at start of list
 *@head: points to first node in the linked list
 * @n:data to insert into node
 *
 *Return: the address of the new element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);

	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

	}

	return (new_node);
}
