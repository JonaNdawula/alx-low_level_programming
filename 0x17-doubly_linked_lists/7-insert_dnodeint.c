#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a node at a certain position
 *
 *
 *@h: head in the list
 *@idx: index of new node
 *@n: value of new node
 *
 *Return: Address of new node
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node_head;
	unsigned int x;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		node_head = *h;
		x = 1;
		if (node_head != NULL)
			for (; node_head != NULL; node_head = node_head->prev)
			{
			}
		for (x = 0; node_head != NULL; node_head = node_head->next, x++)
		{
			if (x == idx)
			{
				if (node_head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = node_head->next;
						new_node->prev = node_head;
						node_head->next->prev = new_node;
						node_head->next =  new_node;
					}
				}
				break;
			}
			node_head = node_head->next;
		}
	}
	return (new_node);
}
