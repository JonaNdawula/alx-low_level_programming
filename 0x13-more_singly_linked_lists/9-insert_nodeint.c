#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *
 *@head: pointer to first node
 *@idx: index where new node added
 *@n:data to put in new node
 *
 * Return: points to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int x;
	listint_t *new_node;
	listint_t *temp_node = *head;


	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	x = 0;
	while (temp_node && x < idx)
	{
		if (x == idx - 1)
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		else
		{
			temp_node = temp_node->next;
		}

				x++;
	}


			return (NULL);
}
