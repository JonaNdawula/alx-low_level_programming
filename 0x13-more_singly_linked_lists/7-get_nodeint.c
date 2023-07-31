#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 *@head: begining node
 *@index:index of node to return
 *
 *Return: pointer ro node being searched for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i;
	listint_t *temp_node = head;

	for (i = 0; temp_node && i < index; i++)
	{
		temp_node = temp_node->next;
	}

	if (temp_node == NULL)
	{
		return (NULL);
	}

	return (temp_node);

}

